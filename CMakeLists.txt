cmake_minimum_required(VERSION 3.24)
project(locadora_ultimo C)

set(CMAKE_C_STANDARD 17)

add_executable(locadora_ultimo main.c entities/types.h view/v_util.c view/v_util.h view/v_menu.c view/v_menu.h view/v_locadora.c view/v_locadora.h view/v_categoria.c view/v_categoria.h view/v_cliente.c view/v_cliente.h view/v_fornecedor.c view/v_fornecedor.h view/v_funcionario.c view/v_funcionario.h string_utils/string_util.c string_utils/string_util.h model/m_init.c model/m_init.h model/m_util.c model/m_util.h model/m_locadora.c model/m_locadora.h model/m_categoria.c model/m_categoria.h model/m_cliente.c model/m_cliente.h model/m_funcionario.c model/m_funcionario.h)
