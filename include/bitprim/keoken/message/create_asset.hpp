/**
 * Copyright (c) 2016-2018 Bitprim Inc.
 *
 * This file is part of Bitprim.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef BITPRIM_KEOKEN_MESSAGE_CREATE_ASSET_HPP_
#define BITPRIM_KEOKEN_MESSAGE_CREATE_ASSET_HPP_

#include <bitprim/keoken/message/base.hpp>

#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/utility/data.hpp>
#include <bitcoin/bitcoin/utility/reader.hpp>
#include <bitcoin/bitcoin/utility/writer.hpp>

namespace bitprim {
namespace keoken {
namespace message {

class BC_API create_asset : public base {
public:

    // Constructors.
    //-------------------------------------------------------------------------

    // create_asset() = default;
    // create_asset(create_asset const& other) = default;

    // Operators.
    //-------------------------------------------------------------------------

    friend
    bool operator==(create_asset const& a, create_asset const& b);
    
    friend
    bool operator!=(create_asset const& a, create_asset const& b);

    // Deserialization.
    //-------------------------------------------------------------------------

    static create_asset factory_from_data(data_chunk const& data);
    static create_asset factory_from_data(std::istream& stream);
    static create_asset factory_from_data(reader& source);

    bool from_data(data_chunk const& data);
    bool from_data(std::istream& stream);
    bool from_data(reader& source);

    // bool is_valid() const;

    // Serialization.
    //-------------------------------------------------------------------------

    data_chunk to_data() const;
    void to_data(std::ostream& stream) const;
    void to_data(writer& sink) const;

    // Properties (size, accessors, cache).
    //-------------------------------------------------------------------------

    size_t serialized_size() const;

    std::string name();
    void set_name(std::string const& x);
    void set_name(std::string&& x);

    amount_t amount();
    void set_amount(amount_t x);

private:
    // char name[17];      // 16 + 1. minus the \0 termination
    std::string name_;
    amount_t amount_;
};

} // namespace message
} // namespace keoken
} // namespace bitprim

#endif //BITPRIM_KEOKEN_MESSAGE_CREATE_ASSET_HPP_
