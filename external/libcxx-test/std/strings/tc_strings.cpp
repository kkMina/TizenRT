/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#include "libcxx_tc_common.h"
#include "tc_strings.hpp"

extern "C"
{
	int tc_strings_main(void)
	{
		tc_libcxx_strings_basic_string_hash_strings();
		tc_libcxx_strings_string_access_at();
		tc_libcxx_strings_string_access_back();
		tc_libcxx_strings_string_access_front();
		tc_libcxx_strings_string_access_index();
		tc_libcxx_strings_string_capacity_capacity();
		tc_libcxx_strings_string_capacity_clear();
		tc_libcxx_strings_string_capacity_empty();
		tc_libcxx_strings_string_capacity_length();
		tc_libcxx_strings_string_capacity_max_size();
		tc_libcxx_strings_string_capacity_reserve();
		tc_libcxx_strings_string_capacity_resize_size();
		tc_libcxx_strings_string_capacity_resize_size_char();
		tc_libcxx_strings_string_capacity_shrink_to_fit();
		tc_libcxx_strings_string_capacity_size();
		tc_libcxx_strings_string_cons_alloc();
		tc_libcxx_strings_string_cons_char_assignment();
		tc_libcxx_strings_string_cons_copy();
		tc_libcxx_strings_string_cons_copy_alloc();
		tc_libcxx_strings_string_cons_copy_assignment();
		tc_libcxx_strings_string_cons_default_noexcept();
		tc_libcxx_strings_string_cons_dtor_noexcept();
		tc_libcxx_strings_string_cons_initializer_list_assignment();
		tc_libcxx_strings_string_cons_iter_alloc();
		tc_libcxx_strings_string_cons_move();
		tc_libcxx_strings_string_cons_move_alloc();
		tc_libcxx_strings_string_cons_move_assign_noexcept();
		tc_libcxx_strings_string_cons_move_assignment();
		tc_libcxx_strings_string_cons_move_noexcept();
		tc_libcxx_strings_string_cons_pointer_alloc();
		tc_libcxx_strings_string_cons_pointer_assignment();
		tc_libcxx_strings_string_cons_pointer_size_alloc();
		tc_libcxx_strings_string_cons_size_char_alloc();
		tc_libcxx_strings_string_cons_substr();
		tc_libcxx_strings_string_iterators_begin();
		tc_libcxx_strings_string_iterators_cbegin();
		tc_libcxx_strings_string_iterators_cend();
		tc_libcxx_strings_string_iterators_crbegin();
		tc_libcxx_strings_string_iterators_crend();
		tc_libcxx_strings_string_iterators_end();
		tc_libcxx_strings_string_iterators_rbegin();
		tc_libcxx_strings_string_iterators_rend();
		tc_libcxx_strings_string_append_initializer_list();
		tc_libcxx_strings_string_append_iterator();
		tc_libcxx_strings_string_append_pointer();
		tc_libcxx_strings_string_append_pointer_size();
		tc_libcxx_strings_string_append_push_back();
		tc_libcxx_strings_string_append_size_char();
	        tc_libcxx_strings_string_append_string();
		tc_libcxx_strings_string_assign_initializer_list();
		tc_libcxx_strings_string_assign_iterator();
		tc_libcxx_strings_string_assign_pointer();
		tc_libcxx_strings_string_assign_pointer_size();
		tc_libcxx_strings_string_assign_rv_string();
		tc_libcxx_strings_string_assign_size_char();
		tc_libcxx_strings_string_assign_string();
		tc_libcxx_strings_string_copy_copy();
		tc_libcxx_strings_string_erase_iter();
		tc_libcxx_strings_string_erase_iter_iter();
		tc_libcxx_strings_string_erase_pop_back();
		tc_libcxx_strings_string_insert_iter_char();
		tc_libcxx_strings_string_insert_iter_initializer_list();
		tc_libcxx_strings_string_insert_iter_iter_iter();
		tc_libcxx_strings_string_insert_iter_size_char();
		tc_libcxx_strings_string_insert_size_pointer();
		tc_libcxx_strings_string_insert_size_string();
		tc_libcxx_strings_string_op_plus_equal_char();
		tc_libcxx_strings_string_op_plus_equal_initializer_list();
		tc_libcxx_strings_string_op_plus_equal_pointer();
		tc_libcxx_strings_string_op_plus_equal_string();
		tc_libcxx_strings_string_replace_iter_iter_initializer_list();
		tc_libcxx_strings_string_replace_iter_iter_pointer();
		tc_libcxx_strings_string_replace_iter_iter_pointer_size();
		tc_libcxx_strings_string_replace_iter_iter_size_char();
		tc_libcxx_strings_string_swap_swap();
		tc_libcxx_strings_string_io_get_line_delim_rv();
		tc_libcxx_strings_string_io_get_line_rv();
		tc_libcxx_strings_string_special_swap();
		tc_libcxx_strings_string_special_swap_noexcept();
		tc_libcxx_strings_string_op___pointer_string();
		tc_libcxx_strings_string_op___string_pointer();
		tc_libcxx_strings_string_op___string_string();
		tc_libcxx_strings_string_op__char_string();
		tc_libcxx_strings_string_op__pointer_string();
		tc_libcxx_strings_string_op__string_char();
		tc_libcxx_strings_string_op__string_pointer();
		tc_libcxx_strings_string_op__string_string();
		tc_libcxx_strings_string_operator___pointer_string();
		tc_libcxx_strings_string_operator___string_pointer();
		tc_libcxx_strings_string_operator___string_string();
		tc_libcxx_strings_string_opgt_pointer_string();
		tc_libcxx_strings_string_opgt_string_pointer();
		tc_libcxx_strings_string_opgt_string_string();
		tc_libcxx_strings_string_opgt__pointer_string();
		tc_libcxx_strings_string_opgt__string_pointer();
		tc_libcxx_strings_string_opgt__string_string();
		tc_libcxx_strings_string_oplt_pointer_string();
		tc_libcxx_strings_string_oplt_string_pointer();
		tc_libcxx_strings_string_oplt_string_string();
		tc_libcxx_strings_string_oplt__pointer_string();
		tc_libcxx_strings_string_oplt__string_pointer();
		tc_libcxx_strings_string_oplt__string_string();
		tc_libcxx_strings_string_accessors_c_str();
		tc_libcxx_strings_string_accessors_data();
		tc_libcxx_strings_string_accessors_get_allocator();
		tc_libcxx_strings_string_compare_pointer();

#if defined(CONFIG_LIBCXX_UTC_STRINGS_LARGESIZE)
		tc_libcxx_strings_string_replace_size_size_pointer();
		tc_libcxx_strings_string_replace_size_size_pointer_size();
		tc_libcxx_strings_string_replace_size_size_size_char();
		tc_libcxx_strings_string_replace_size_size_string();
		tc_libcxx_strings_string_replace_size_size_string_size_size();
		tc_libcxx_strings_string_insert_size_size_char();
		tc_libcxx_strings_string_compare_size_size_pointer();
		tc_libcxx_strings_string_compare_size_size_pointer_size();
		tc_libcxx_strings_string_compare_size_size_string();
		tc_libcxx_strings_string_compare_size_size_string_size_size();
		tc_libcxx_strings_string_replace_iter_iter_string();
		tc_libcxx_strings_string_assign_string_size_size();
		tc_libcxx_strings_string_append_string_size_size();
		tc_libcxx_strings_string_erase_size_size();
		tc_libcxx_strings_string_insert_size_string_size_size();
		tc_libcxx_strings_string_find_first_not_of_pointer_size_size();
		tc_libcxx_strings_string_find_first_of_pointer_size_size();
		tc_libcxx_strings_string_find_last_not_of_pointer_size_size();
		tc_libcxx_strings_string_find_last_of_pointer_size_size();
		tc_libcxx_strings_string_find_pointer_size_size();
		tc_libcxx_strings_string_rfind_pointer_size_size();
		tc_libcxx_strings_string_insert_size_pointer_size();
		tc_libcxx_strings_string_replace_iter_iter_iter_iter();
#endif
		tc_libcxx_strings_string_compare_string();
		tc_libcxx_strings_string_find_first_not_of_char_size();
		tc_libcxx_strings_string_find_first_not_of_pointer_size();
		tc_libcxx_strings_string_find_first_not_of_string_size();
		tc_libcxx_strings_string_find_first_of_char_size();
		tc_libcxx_strings_string_find_first_of_pointer_size();
		tc_libcxx_strings_string_find_first_of_string_size();
		tc_libcxx_strings_string_find_last_not_of_char_size();
		tc_libcxx_strings_string_find_last_not_of_pointer_size();
		tc_libcxx_strings_string_find_last_not_of_string_size();
		tc_libcxx_strings_string_find_last_of_char_size();
		tc_libcxx_strings_string_find_last_of_pointer_size();
		tc_libcxx_strings_string_find_last_of_string_size();
		tc_libcxx_strings_string_find_char_size();
		tc_libcxx_strings_string_find_pointer_size();
		tc_libcxx_strings_string_find_string_size();
		tc_libcxx_strings_string_rfind_char_size();
		tc_libcxx_strings_string_rfind_pointer_size();
		tc_libcxx_strings_string_rfind_string_size();
		tc_libcxx_strings_string_substr_substr();
		tc_libcxx_strings_basic_string_types();
		tc_libcxx_strings_c_strings_cctype();
		tc_libcxx_strings_char_traits_specializations_char_assign2();
		tc_libcxx_strings_char_traits_specializations_char_assign3();
		tc_libcxx_strings_char_traits_specializations_char_compare();
		tc_libcxx_strings_char_traits_specializations_char_copy();
		tc_libcxx_strings_char_traits_specializations_char_eof();
		tc_libcxx_strings_char_traits_specializations_char_eq();
		tc_libcxx_strings_char_traits_specializations_char_eq_int_type();
		tc_libcxx_strings_char_traits_specializations_char_find();
		tc_libcxx_strings_char_traits_specializations_char_length();
		tc_libcxx_strings_char_traits_specializations_char_lt();
		tc_libcxx_strings_char_traits_specializations_char_move();
		tc_libcxx_strings_char_traits_specializations_char_not_eof();
		tc_libcxx_strings_char_traits_specializations_char_to_char_type();
		tc_libcxx_strings_char_traits_specializations_char_to_int_type();
		tc_libcxx_strings_char_traits_specializations_char_types();
		tc_libcxx_strings_char_traits_specializations_char16_t_assign2();
		tc_libcxx_strings_char_traits_specializations_char16_t_assign3();
		tc_libcxx_strings_char_traits_specializations_char16_t_compare();
		tc_libcxx_strings_char_traits_specializations_char16_t_copy();
		tc_libcxx_strings_char_traits_specializations_char16_t_eof();
		tc_libcxx_strings_char_traits_specializations_char16_t_eq();
		tc_libcxx_strings_char_traits_specializations_char16_t_eq_int_type();
		tc_libcxx_strings_char_traits_specializations_char16_t_find();
		tc_libcxx_strings_char_traits_specializations_char16_t_length();
		tc_libcxx_strings_char_traits_specializations_char16_t_lt();
		tc_libcxx_strings_char_traits_specializations_char16_t_move();
		tc_libcxx_strings_char_traits_specializations_char16_t_not_eof();
		tc_libcxx_strings_char_traits_specializations_char16_t_to_char_type();
		tc_libcxx_strings_char_traits_specializations_char16_t_to_int_type();
		tc_libcxx_strings_char_traits_specializations_char16_t_types();
		tc_libcxx_strings_char_traits_specializations_char32_t_assign2();
		tc_libcxx_strings_char_traits_specializations_char32_t_assign3();
		tc_libcxx_strings_char_traits_specializations_char32_t_compare();
		tc_libcxx_strings_char_traits_specializations_char32_t_copy();
		tc_libcxx_strings_char_traits_specializations_char32_t_eof();
		tc_libcxx_strings_char_traits_specializations_char32_t_eq();
		tc_libcxx_strings_char_traits_specializations_char32_t_eq_int_type();
		tc_libcxx_strings_char_traits_specializations_char32_t_find();
		tc_libcxx_strings_char_traits_specializations_char32_t_length();
		tc_libcxx_strings_char_traits_specializations_char32_t_lt();
		tc_libcxx_strings_char_traits_specializations_char32_t_move();
		tc_libcxx_strings_char_traits_specializations_char32_t_not_eof();
		tc_libcxx_strings_char_traits_specializations_char32_t_to_char_type();
		tc_libcxx_strings_char_traits_specializations_char32_t_to_int_type();
		tc_libcxx_strings_char_traits_specializations_char32_t_types();
		tc_libcxx_strings_char_traits_specializations_wchar_t_assign2();
		tc_libcxx_strings_char_traits_specializations_wchar_t_eof();
		tc_libcxx_strings_char_traits_specializations_wchar_t_eq();
		tc_libcxx_strings_char_traits_specializations_wchar_t_eq_int_type();
		tc_libcxx_strings_char_traits_specializations_wchar_t_lt();
		tc_libcxx_strings_char_traits_specializations_wchar_t_not_eof();
		tc_libcxx_strings_char_traits_specializations_wchar_t_to_char_type();
		tc_libcxx_strings_char_traits_specializations_wchar_t_to_int_type();
		tc_libcxx_strings_char_traits_specializations_wchar_t_types();
		return 0;
	}
}
