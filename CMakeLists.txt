cmake_minimum_required(VERSION 3.17)
project(QPC++)

add_library(qpc++ OBJECT)
target_compile_definitions(qpc++ PUBLIC "${QPCPP_COMPILE_DEFINITIONS}")
target_compile_options(qpc++ PUBLIC "${QPCPP_COMPILE_OPTIONS}")
target_sources(qpc++ PRIVATE
        src/qf/qep_hsm.cpp
        src/qf/qep_msm.cpp
        src/qf/qf_act.cpp
        src/qf/qf_actq.cpp
        src/qf/qf_defer.cpp
        src/qf/qf_dyn.cpp
        src/qf/qf_mem.cpp
        src/qf/qf_ps.cpp
        src/qf/qf_qact.cpp
        src/qf/qf_qeq.cpp
        src/qf/qf_qmact.cpp
        src/qf/qf_time.cpp
        "${QP_PORT_DIR}/qf_port.cpp"
        )
target_include_directories(qpc++
        PUBLIC include
        PRIVATE src
        PUBLIC "${QP_PORT_DIR}"
        )
target_link_libraries(qpc++ PUBLIC Threads::Threads)
target_link_options(qpc++ PUBLIC ${QPCPP_LINK_OPTIONS})
