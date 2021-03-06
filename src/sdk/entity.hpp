
/*
 * Nekohook: Free, fast and modular cheat software
 * Copyright (C) 2018 Rebekah Rowe
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "vector.hpp"

#include "netvar.hpp"

namespace sourcesdk {

class Entity {
public:
    int GetIndex() {
        using Func = int (*)();
        return GetVirtual<Func>(this, 79)();
    }
    bool GetDormant(){
        using Func = bool (*)();
        return GetVirtual<Func>(this, 75)();
    }
    inline math::Vector& GetOrigin() {
        return netvar::origin.Get(this);
    }
    ClientClass* GetClientClass() {
        using Func = ClientClass* (*)();
        return GetVirtual<Func>(this, 17)();
    }
};

}
