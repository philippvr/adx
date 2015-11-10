/*
 * This file is part of adx.
 *
 * adx is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * adx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with adx.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ADX_DERIVATIVE_TRAITS_HPP_
#define ADX_DERIVATIVE_TRAITS_HPP_

namespace adx {

template<typename T>
struct derivative_traits;

template<>
struct derivative_traits<float> {
  struct eye_type { operator float() const { return 1.f; } };
  struct zero_type { operator float() const { return 0.f; } };
};

template<>
struct derivative_traits<double> {
  struct eye_type { operator double() const { return 1.; } };
  struct zero_type { operator double() const { return 0.; } };
};

template<>
struct derivative_traits<long double> {
  struct eye_type { operator long double() const { return 1.l; } };
  struct zero_type { operator long double() const { return 0.l; } };
};

}

#endif /* end of include guard: ADX_DERIVATIVE_TRAITS_HPP_ */
