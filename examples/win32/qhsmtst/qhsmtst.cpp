//$file${.::qhsmtst.cpp} #####################################################
//
// Model: qhsmtst.qm
// File:  ${.::qhsmtst.cpp}
//
// This code has been generated by QM 4.2.1 (https://www.state-machine.com/qm).
// DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
//
// This program is open source software: you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
// for more details.
//
//$endhead${.::qhsmtst.cpp} ##################################################
#include "qpcpp.h"
#include "qhsmtst.h"

namespace QHSMTST {

//$declare${HSMs::QHsmTst} ###################################################
//${HSMs::QHsmTst} ...........................................................
class QHsmTst : public QP::QHsm {
private:
    bool m_foo;

public:
    QHsmTst()
      : QHsm(Q_STATE_CAST(&QHsmTst::initial))
    {}

protected:
    static QP::QState initial(QHsmTst * const me, QP::QEvt const * const e);
    static QP::QState s(QHsmTst * const me, QP::QEvt const * const e);
    static QP::QState s1(QHsmTst * const me, QP::QEvt const * const e);
    static QP::QState s11(QHsmTst * const me, QP::QEvt const * const e);
    static QP::QState s2(QHsmTst * const me, QP::QEvt const * const e);
    static QP::QState s21(QHsmTst * const me, QP::QEvt const * const e);
    static QP::QState s211(QHsmTst * const me, QP::QEvt const * const e);
};
//$enddecl${HSMs::QHsmTst} ###################################################

static QHsmTst l_hsmtst; // the only instance of the QHsmTst class

// global-scope definitions -----------------------------------------
QP::QHsm * const the_hsm = &l_hsmtst; // the opaque pointer

//$define${HSMs::QHsmTst} ####################################################
// Check for the minimum required QP version
#if ((QP_VERSION < 630) || (QP_VERSION != ((QP_RELEASE^4294967295U) % 0x3E8)))
#error qpcpp version 6.3.0 or higher required
#endif
//${HSMs::QHsmTst} ...........................................................

//${HSMs::QHsmTst::SM} .......................................................
QP::QState QHsmTst::initial(QHsmTst * const me, QP::QEvt const * const e) {
    //${HSMs::QHsmTst::SM::initial}
    (void)e; // avoid compiler warning
    me->m_foo = 0U;
    BSP_display("top-INIT;");

    QS_FUN_DICTIONARY(&s);
    QS_FUN_DICTIONARY(&s1);
    QS_FUN_DICTIONARY(&s11);
    QS_FUN_DICTIONARY(&s2);
    QS_FUN_DICTIONARY(&s21);
    QS_FUN_DICTIONARY(&s211);

    return Q_TRAN(&s2);
}
//${HSMs::QHsmTst::SM::s} ....................................................
QP::QState QHsmTst::s(QHsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${HSMs::QHsmTst::SM::s}
        case Q_ENTRY_SIG: {
            BSP_display("s-ENTRY;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s}
        case Q_EXIT_SIG: {
            BSP_display("s-EXIT;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::initial}
        case Q_INIT_SIG: {
            BSP_display("s-INIT;");
            status_ = Q_TRAN(&s11);
            break;
        }
        //${HSMs::QHsmTst::SM::s::I}
        case I_SIG: {
            //${HSMs::QHsmTst::SM::s::I::[me->m_foo]}
            if (me->m_foo) {
                me->m_foo = 0U;
                BSP_display("s-I;");
                status_ = Q_HANDLED();
            }
            else {
                status_ = Q_UNHANDLED();
            }
            break;
        }
        //${HSMs::QHsmTst::SM::s::E}
        case E_SIG: {
            BSP_display("s-E;");
            status_ = Q_TRAN(&s11);
            break;
        }
        //${HSMs::QHsmTst::SM::s::TERMINATE}
        case TERMINATE_SIG: {
            BSP_terminate(0);
            status_ = Q_HANDLED();
            break;
        }
        default: {
            status_ = Q_SUPER(&top);
            break;
        }
    }
    return status_;
}
//${HSMs::QHsmTst::SM::s::s1} ................................................
QP::QState QHsmTst::s1(QHsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${HSMs::QHsmTst::SM::s::s1}
        case Q_ENTRY_SIG: {
            BSP_display("s1-ENTRY;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1}
        case Q_EXIT_SIG: {
            BSP_display("s1-EXIT;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::initial}
        case Q_INIT_SIG: {
            BSP_display("s1-INIT;");
            status_ = Q_TRAN(&s11);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::I}
        case I_SIG: {
            BSP_display("s1-I;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::D}
        case D_SIG: {
            //${HSMs::QHsmTst::SM::s::s1::D::[!me->m_foo]}
            if (!me->m_foo) {
                me->m_foo = true;
                BSP_display("s1-D;");
                status_ = Q_TRAN(&s);
            }
            else {
                status_ = Q_UNHANDLED();
            }
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::A}
        case A_SIG: {
            BSP_display("s1-A;");
            status_ = Q_TRAN(&s1);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::B}
        case B_SIG: {
            BSP_display("s1-B;");
            status_ = Q_TRAN(&s11);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::F}
        case F_SIG: {
            BSP_display("s1-F;");
            status_ = Q_TRAN(&s211);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::C}
        case C_SIG: {
            BSP_display("s1-C;");
            status_ = Q_TRAN(&s2);
            break;
        }
        default: {
            status_ = Q_SUPER(&s);
            break;
        }
    }
    return status_;
}
//${HSMs::QHsmTst::SM::s::s1::s11} ...........................................
QP::QState QHsmTst::s11(QHsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${HSMs::QHsmTst::SM::s::s1::s11}
        case Q_ENTRY_SIG: {
            BSP_display("s11-ENTRY;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::s11}
        case Q_EXIT_SIG: {
            BSP_display("s11-EXIT;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::s11::H}
        case H_SIG: {
            BSP_display("s11-H;");
            status_ = Q_TRAN(&s);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::s11::D}
        case D_SIG: {
            //${HSMs::QHsmTst::SM::s::s1::s11::D::[me->m_foo]}
            if (me->m_foo) {
                me->m_foo = false;
                BSP_display("s11-D;");
                status_ = Q_TRAN(&s1);
            }
            else {
                status_ = Q_UNHANDLED();
            }
            break;
        }
        //${HSMs::QHsmTst::SM::s::s1::s11::G}
        case G_SIG: {
            BSP_display("s11-G;");
            status_ = Q_TRAN(&s211);
            break;
        }
        default: {
            status_ = Q_SUPER(&s1);
            break;
        }
    }
    return status_;
}
//${HSMs::QHsmTst::SM::s::s2} ................................................
QP::QState QHsmTst::s2(QHsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${HSMs::QHsmTst::SM::s::s2}
        case Q_ENTRY_SIG: {
            BSP_display("s2-ENTRY;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2}
        case Q_EXIT_SIG: {
            BSP_display("s2-EXIT;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::initial}
        case Q_INIT_SIG: {
            BSP_display("s2-INIT;");
            status_ = Q_TRAN(&s211);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::I}
        case I_SIG: {
            //${HSMs::QHsmTst::SM::s::s2::I::[!me->m_foo]}
            if (!me->m_foo) {
                me->m_foo = true;
                BSP_display("s2-I;");
                status_ = Q_HANDLED();
            }
            else {
                status_ = Q_UNHANDLED();
            }
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::F}
        case F_SIG: {
            BSP_display("s2-F;");
            status_ = Q_TRAN(&s11);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::C}
        case C_SIG: {
            BSP_display("s2-C;");
            status_ = Q_TRAN(&s1);
            break;
        }
        default: {
            status_ = Q_SUPER(&s);
            break;
        }
    }
    return status_;
}
//${HSMs::QHsmTst::SM::s::s2::s21} ...........................................
QP::QState QHsmTst::s21(QHsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${HSMs::QHsmTst::SM::s::s2::s21}
        case Q_ENTRY_SIG: {
            BSP_display("s21-ENTRY;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21}
        case Q_EXIT_SIG: {
            BSP_display("s21-EXIT;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::initial}
        case Q_INIT_SIG: {
            BSP_display("s21-INIT;");
            status_ = Q_TRAN(&s211);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::G}
        case G_SIG: {
            BSP_display("s21-G;");
            status_ = Q_TRAN(&s1);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::A}
        case A_SIG: {
            BSP_display("s21-A;");
            status_ = Q_TRAN(&s21);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::B}
        case B_SIG: {
            BSP_display("s21-B;");
            status_ = Q_TRAN(&s211);
            break;
        }
        default: {
            status_ = Q_SUPER(&s2);
            break;
        }
    }
    return status_;
}
//${HSMs::QHsmTst::SM::s::s2::s21::s211} .....................................
QP::QState QHsmTst::s211(QHsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${HSMs::QHsmTst::SM::s::s2::s21::s211}
        case Q_ENTRY_SIG: {
            BSP_display("s211-ENTRY;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::s211}
        case Q_EXIT_SIG: {
            BSP_display("s211-EXIT;");
            status_ = Q_HANDLED();
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::s211::H}
        case H_SIG: {
            BSP_display("s211-H;");
            status_ = Q_TRAN(&s);
            break;
        }
        //${HSMs::QHsmTst::SM::s::s2::s21::s211::D}
        case D_SIG: {
            BSP_display("s211-D;");
            status_ = Q_TRAN(&s21);
            break;
        }
        default: {
            status_ = Q_SUPER(&s21);
            break;
        }
    }
    return status_;
}
//$enddef${HSMs::QHsmTst} ####################################################

} // namespace QHSMTST