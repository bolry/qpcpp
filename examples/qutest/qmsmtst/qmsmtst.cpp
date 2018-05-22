//$file${.::qmsmtst.cpp} #####################################################
//
// Model: qmsmtst.qm
// File:  ${.::qmsmtst.cpp}
//
// This code has been generated by QM 4.2.1 (https://www.state-machine.com/qm).
// DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
//
// This code is covered by the following QP license:
// License #   : QPCPP-EVAL-181231
// Issued to   : Institution or an individual evaluating the QP frameworks
// Framework(s): qpcpp
// Support ends: 2018-12-31
// Product(s)  :
// This license is available only for evaluation purposes and
// the generated code is still licensed under the terms of GPL.
// Please submit request for extension of the evaluaion period at:
// https://www.state-machine.com/licensing/#RequestForm
//
//$endhead${.::qmsmtst.cpp} ##################################################
#include "qpcpp.h"
#include "qmsmtst.h"

namespace QMSMTST {

//$declare${SMs::QMsmTst} ####################################################
//${SMs::QMsmTst} ............................................................
class QMsmTst : public QP::QMsm {
private:
    bool m_foo;

public:
    QMsmTst()
      : QMsm(Q_STATE_CAST(&QMsmTst::initial))
    {}

protected:
    static QP::QState initial(QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s  (QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s_e(QMsmTst * const me);
    static QP::QState s_x(QMsmTst * const me);
    static QP::QState s_i(QMsmTst * const me);
    static QP::QMState const s_s;
    static QP::QState s1  (QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s1_e(QMsmTst * const me);
    static QP::QState s1_x(QMsmTst * const me);
    static QP::QState s1_i(QMsmTst * const me);
    static QP::QMState const s1_s;
    static QP::QState s11  (QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s11_e(QMsmTst * const me);
    static QP::QState s11_x(QMsmTst * const me);
    static QP::QMState const s11_s;
    static QP::QState s2  (QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s2_e(QMsmTst * const me);
    static QP::QState s2_x(QMsmTst * const me);
    static QP::QState s2_i(QMsmTst * const me);
    static QP::QMState const s2_s;
    static QP::QState s21  (QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s21_e(QMsmTst * const me);
    static QP::QState s21_x(QMsmTst * const me);
    static QP::QState s21_i(QMsmTst * const me);
    static QP::QMState const s21_s;
    static QP::QState s211  (QMsmTst * const me, QP::QEvt const * const e);
    static QP::QState s211_e(QMsmTst * const me);
    static QP::QState s211_x(QMsmTst * const me);
    static QP::QMState const s211_s;
};
//$enddecl${SMs::QMsmTst} ####################################################

static QMsmTst l_msmtst; // the only instance of the QMsmTst class

// global-scope definitions -----------------------------------------
QP::QMsm * const the_msm = &l_msmtst; // the opaque pointer

//$define${SMs::QMsmTst} #####################################################
// Check for the minimum required QP version
#if ((QP_VERSION < 630) || (QP_VERSION != ((QP_RELEASE^4294967295U) % 0x3E8)))
#error qpcpp version 6.3.0 or higher required
#endif
//${SMs::QMsmTst} ............................................................

//${SMs::QMsmTst::SM} ........................................................
QP::QState QMsmTst::initial(QMsmTst * const me, QP::QEvt const * const e) {
    static struct {
        QP::QMState const *target;
        QP::QActionHandler act[4];
    } const tatbl_ = { // tran-action table
        &s2_s, // target state
        {
            Q_ACTION_CAST(&s_e), // entry
            Q_ACTION_CAST(&s2_e), // entry
            Q_ACTION_CAST(&s2_i), // initial tran.
            Q_ACTION_CAST(0) // zero terminator
        }
    };
    //${SMs::QMsmTst::SM::initial}
    (void)e; // avoid compiler warning
    me->m_foo = 0U;
    BSP_display("top-INIT;");

    QS_SIG_DICTIONARY(A_SIG, me);
    QS_SIG_DICTIONARY(B_SIG, me);
    QS_SIG_DICTIONARY(C_SIG, me);
    QS_SIG_DICTIONARY(D_SIG, me);
    QS_SIG_DICTIONARY(E_SIG, me);
    QS_SIG_DICTIONARY(F_SIG, me);
    QS_SIG_DICTIONARY(G_SIG, me);
    QS_SIG_DICTIONARY(H_SIG, me);
    QS_SIG_DICTIONARY(I_SIG, me);
    QS_SIG_DICTIONARY(TERMINATE_SIG, me);
    QS_SIG_DICTIONARY(IGNORE_SIG, me);

    QS_FUN_DICTIONARY(&s);
    QS_FUN_DICTIONARY(&s1);
    QS_FUN_DICTIONARY(&s11);
    QS_FUN_DICTIONARY(&s2);
    QS_FUN_DICTIONARY(&s21);
    QS_FUN_DICTIONARY(&s211);

    return QM_TRAN_INIT(&tatbl_);
}
//${SMs::QMsmTst::SM::s} .....................................................
QP::QMState const QMsmTst::s_s = {
    static_cast<QP::QMState const *>(0), // superstate (top)
    Q_STATE_CAST(&QMsmTst::s),
    Q_ACTION_CAST(&QMsmTst::s_e),
    Q_ACTION_CAST(&QMsmTst::s_x),
    Q_ACTION_CAST(&QMsmTst::s_i)
};
//${SMs::QMsmTst::SM::s}
QP::QState QMsmTst::s_e(QMsmTst * const me) {
    BSP_display("s-ENTRY;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_ENTRY(&s_s);
}
//${SMs::QMsmTst::SM::s}
QP::QState QMsmTst::s_x(QMsmTst * const me) {
    BSP_display("s-EXIT;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_EXIT(&s_s);
}
//${SMs::QMsmTst::SM::s::initial}
QP::QState QMsmTst::s_i(QMsmTst * const me) {
    static struct {
        QP::QMState const *target;
        QP::QActionHandler act[3];
    } const tatbl_ = { // tran-action table
        &s11_s, // target state
        {
            Q_ACTION_CAST(&s1_e), // entry
            Q_ACTION_CAST(&s11_e), // entry
            Q_ACTION_CAST(0) // zero terminator
        }
    };
    //${SMs::QMsmTst::SM::s::initial}
    BSP_display("s-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
//${SMs::QMsmTst::SM::s}
QP::QState QMsmTst::s(QMsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${SMs::QMsmTst::SM::s::I}
        case I_SIG: {
            //${SMs::QMsmTst::SM::s::I::[me->m_foo]}
            if (me->m_foo) {
                me->m_foo = 0U;
                BSP_display("s-I;");
                status_ = QM_HANDLED();
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        //${SMs::QMsmTst::SM::s::E}
        case E_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[3];
            } const tatbl_ = { // tran-action table
                &s11_s, // target state
                {
                    Q_ACTION_CAST(&s1_e), // entry
                    Q_ACTION_CAST(&s11_e), // entry
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s-E;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::TERMINATE}
        case TERMINATE_SIG: {
            BSP_terminate(0);
            status_ = QM_HANDLED();
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    (void)me; // avoid compiler warning in case 'me' is not used
    return status_;
}
//${SMs::QMsmTst::SM::s::s1} .................................................
QP::QMState const QMsmTst::s1_s = {
    &QMsmTst::s_s, // superstate
    Q_STATE_CAST(&QMsmTst::s1),
    Q_ACTION_CAST(&QMsmTst::s1_e),
    Q_ACTION_CAST(&QMsmTst::s1_x),
    Q_ACTION_CAST(&QMsmTst::s1_i)
};
//${SMs::QMsmTst::SM::s::s1}
QP::QState QMsmTst::s1_e(QMsmTst * const me) {
    BSP_display("s1-ENTRY;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_ENTRY(&s1_s);
}
//${SMs::QMsmTst::SM::s::s1}
QP::QState QMsmTst::s1_x(QMsmTst * const me) {
    BSP_display("s1-EXIT;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_EXIT(&s1_s);
}
//${SMs::QMsmTst::SM::s::s1::initial}
QP::QState QMsmTst::s1_i(QMsmTst * const me) {
    static struct {
        QP::QMState const *target;
        QP::QActionHandler act[2];
    } const tatbl_ = { // tran-action table
        &s11_s, // target state
        {
            Q_ACTION_CAST(&s11_e), // entry
            Q_ACTION_CAST(0) // zero terminator
        }
    };
    //${SMs::QMsmTst::SM::s::s1::initial}
    BSP_display("s1-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
//${SMs::QMsmTst::SM::s::s1}
QP::QState QMsmTst::s1(QMsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${SMs::QMsmTst::SM::s::s1::I}
        case I_SIG: {
            BSP_display("s1-I;");
            status_ = QM_HANDLED();
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::D}
        case D_SIG: {
            //${SMs::QMsmTst::SM::s::s1::D::[!me->m_foo]}
            if (!me->m_foo) {
                static struct {
                    QP::QMState const *target;
                    QP::QActionHandler act[3];
                } const tatbl_ = { // tran-action table
                    &s_s, // target state
                    {
                        Q_ACTION_CAST(&s1_x), // exit
                        Q_ACTION_CAST(&s_i), // initial tran.
                        Q_ACTION_CAST(0) // zero terminator
                    }
                };
                me->m_foo = true;
                BSP_display("s1-D;");
                status_ = QM_TRAN(&tatbl_);
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::A}
        case A_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[4];
            } const tatbl_ = { // tran-action table
                &s1_s, // target state
                {
                    Q_ACTION_CAST(&s1_x), // exit
                    Q_ACTION_CAST(&s1_e), // entry
                    Q_ACTION_CAST(&s1_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s1-A;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::B}
        case B_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[2];
            } const tatbl_ = { // tran-action table
                &s11_s, // target state
                {
                    Q_ACTION_CAST(&s11_e), // entry
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s1-B;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::F}
        case F_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[5];
            } const tatbl_ = { // tran-action table
                &s211_s, // target state
                {
                    Q_ACTION_CAST(&s1_x), // exit
                    Q_ACTION_CAST(&s2_e), // entry
                    Q_ACTION_CAST(&s21_e), // entry
                    Q_ACTION_CAST(&s211_e), // entry
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s1-F;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::C}
        case C_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[4];
            } const tatbl_ = { // tran-action table
                &s2_s, // target state
                {
                    Q_ACTION_CAST(&s1_x), // exit
                    Q_ACTION_CAST(&s2_e), // entry
                    Q_ACTION_CAST(&s2_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s1-C;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
//${SMs::QMsmTst::SM::s::s1::s11} ............................................
QP::QMState const QMsmTst::s11_s = {
    &QMsmTst::s1_s, // superstate
    Q_STATE_CAST(&QMsmTst::s11),
    Q_ACTION_CAST(&QMsmTst::s11_e),
    Q_ACTION_CAST(&QMsmTst::s11_x),
    Q_ACTION_CAST(0)  // no initial tran.
};
//${SMs::QMsmTst::SM::s::s1::s11}
QP::QState QMsmTst::s11_e(QMsmTst * const me) {
    BSP_display("s11-ENTRY;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_ENTRY(&s11_s);
}
//${SMs::QMsmTst::SM::s::s1::s11}
QP::QState QMsmTst::s11_x(QMsmTst * const me) {
    BSP_display("s11-EXIT;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_EXIT(&s11_s);
}
//${SMs::QMsmTst::SM::s::s1::s11}
QP::QState QMsmTst::s11(QMsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${SMs::QMsmTst::SM::s::s1::s11::H}
        case H_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[4];
            } const tatbl_ = { // tran-action table
                &s_s, // target state
                {
                    Q_ACTION_CAST(&s11_x), // exit
                    Q_ACTION_CAST(&s1_x), // exit
                    Q_ACTION_CAST(&s_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s11-H;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::s11::D}
        case D_SIG: {
            //${SMs::QMsmTst::SM::s::s1::s11::D::[me->m_foo]}
            if (me->m_foo) {
                static struct {
                    QP::QMState const *target;
                    QP::QActionHandler act[3];
                } const tatbl_ = { // tran-action table
                    &s1_s, // target state
                    {
                        Q_ACTION_CAST(&s11_x), // exit
                        Q_ACTION_CAST(&s1_i), // initial tran.
                        Q_ACTION_CAST(0) // zero terminator
                    }
                };
                me->m_foo = false;
                BSP_display("s11-D;");
                status_ = QM_TRAN(&tatbl_);
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        //${SMs::QMsmTst::SM::s::s1::s11::G}
        case G_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[6];
            } const tatbl_ = { // tran-action table
                &s211_s, // target state
                {
                    Q_ACTION_CAST(&s11_x), // exit
                    Q_ACTION_CAST(&s1_x), // exit
                    Q_ACTION_CAST(&s2_e), // entry
                    Q_ACTION_CAST(&s21_e), // entry
                    Q_ACTION_CAST(&s211_e), // entry
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s11-G;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
//${SMs::QMsmTst::SM::s::s2} .................................................
QP::QMState const QMsmTst::s2_s = {
    &QMsmTst::s_s, // superstate
    Q_STATE_CAST(&QMsmTst::s2),
    Q_ACTION_CAST(&QMsmTst::s2_e),
    Q_ACTION_CAST(&QMsmTst::s2_x),
    Q_ACTION_CAST(&QMsmTst::s2_i)
};
//${SMs::QMsmTst::SM::s::s2}
QP::QState QMsmTst::s2_e(QMsmTst * const me) {
    BSP_display("s2-ENTRY;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_ENTRY(&s2_s);
}
//${SMs::QMsmTst::SM::s::s2}
QP::QState QMsmTst::s2_x(QMsmTst * const me) {
    BSP_display("s2-EXIT;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_EXIT(&s2_s);
}
//${SMs::QMsmTst::SM::s::s2::initial}
QP::QState QMsmTst::s2_i(QMsmTst * const me) {
    static struct {
        QP::QMState const *target;
        QP::QActionHandler act[3];
    } const tatbl_ = { // tran-action table
        &s211_s, // target state
        {
            Q_ACTION_CAST(&s21_e), // entry
            Q_ACTION_CAST(&s211_e), // entry
            Q_ACTION_CAST(0) // zero terminator
        }
    };
    //${SMs::QMsmTst::SM::s::s2::initial}
    BSP_display("s2-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
//${SMs::QMsmTst::SM::s::s2}
QP::QState QMsmTst::s2(QMsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${SMs::QMsmTst::SM::s::s2::I}
        case I_SIG: {
            //${SMs::QMsmTst::SM::s::s2::I::[!me->m_foo]}
            if (!me->m_foo) {
                me->m_foo = true;
                BSP_display("s2-I;");
                status_ = QM_HANDLED();
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        //${SMs::QMsmTst::SM::s::s2::F}
        case F_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[4];
            } const tatbl_ = { // tran-action table
                &s11_s, // target state
                {
                    Q_ACTION_CAST(&s2_x), // exit
                    Q_ACTION_CAST(&s1_e), // entry
                    Q_ACTION_CAST(&s11_e), // entry
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s2-F;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s2::C}
        case C_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[4];
            } const tatbl_ = { // tran-action table
                &s1_s, // target state
                {
                    Q_ACTION_CAST(&s2_x), // exit
                    Q_ACTION_CAST(&s1_e), // entry
                    Q_ACTION_CAST(&s1_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s2-C;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
//${SMs::QMsmTst::SM::s::s2::s21} ............................................
QP::QMState const QMsmTst::s21_s = {
    &QMsmTst::s2_s, // superstate
    Q_STATE_CAST(&QMsmTst::s21),
    Q_ACTION_CAST(&QMsmTst::s21_e),
    Q_ACTION_CAST(&QMsmTst::s21_x),
    Q_ACTION_CAST(&QMsmTst::s21_i)
};
//${SMs::QMsmTst::SM::s::s2::s21}
QP::QState QMsmTst::s21_e(QMsmTst * const me) {
    BSP_display("s21-ENTRY;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_ENTRY(&s21_s);
}
//${SMs::QMsmTst::SM::s::s2::s21}
QP::QState QMsmTst::s21_x(QMsmTst * const me) {
    BSP_display("s21-EXIT;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_EXIT(&s21_s);
}
//${SMs::QMsmTst::SM::s::s2::s21::initial}
QP::QState QMsmTst::s21_i(QMsmTst * const me) {
    static struct {
        QP::QMState const *target;
        QP::QActionHandler act[2];
    } const tatbl_ = { // tran-action table
        &s211_s, // target state
        {
            Q_ACTION_CAST(&s211_e), // entry
            Q_ACTION_CAST(0) // zero terminator
        }
    };
    //${SMs::QMsmTst::SM::s::s2::s21::initial}
    BSP_display("s21-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
//${SMs::QMsmTst::SM::s::s2::s21}
QP::QState QMsmTst::s21(QMsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${SMs::QMsmTst::SM::s::s2::s21::G}
        case G_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[5];
            } const tatbl_ = { // tran-action table
                &s1_s, // target state
                {
                    Q_ACTION_CAST(&s21_x), // exit
                    Q_ACTION_CAST(&s2_x), // exit
                    Q_ACTION_CAST(&s1_e), // entry
                    Q_ACTION_CAST(&s1_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s21-G;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s2::s21::A}
        case A_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[4];
            } const tatbl_ = { // tran-action table
                &s21_s, // target state
                {
                    Q_ACTION_CAST(&s21_x), // exit
                    Q_ACTION_CAST(&s21_e), // entry
                    Q_ACTION_CAST(&s21_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s21-A;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s2::s21::B}
        case B_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[2];
            } const tatbl_ = { // tran-action table
                &s211_s, // target state
                {
                    Q_ACTION_CAST(&s211_e), // entry
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s21-B;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
//${SMs::QMsmTst::SM::s::s2::s21::s211} ......................................
QP::QMState const QMsmTst::s211_s = {
    &QMsmTst::s21_s, // superstate
    Q_STATE_CAST(&QMsmTst::s211),
    Q_ACTION_CAST(&QMsmTst::s211_e),
    Q_ACTION_CAST(&QMsmTst::s211_x),
    Q_ACTION_CAST(0)  // no initial tran.
};
//${SMs::QMsmTst::SM::s::s2::s21::s211}
QP::QState QMsmTst::s211_e(QMsmTst * const me) {
    BSP_display("s211-ENTRY;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_ENTRY(&s211_s);
}
//${SMs::QMsmTst::SM::s::s2::s21::s211}
QP::QState QMsmTst::s211_x(QMsmTst * const me) {
    BSP_display("s211-EXIT;");
    (void)me; // avoid compiler warning in case 'me' is not used
    return QM_EXIT(&s211_s);
}
//${SMs::QMsmTst::SM::s::s2::s21::s211}
QP::QState QMsmTst::s211(QMsmTst * const me, QP::QEvt const * const e) {
    QP::QState status_;
    switch (e->sig) {
        //${SMs::QMsmTst::SM::s::s2::s21::s211::H}
        case H_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[5];
            } const tatbl_ = { // tran-action table
                &s_s, // target state
                {
                    Q_ACTION_CAST(&s211_x), // exit
                    Q_ACTION_CAST(&s21_x), // exit
                    Q_ACTION_CAST(&s2_x), // exit
                    Q_ACTION_CAST(&s_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s211-H;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        //${SMs::QMsmTst::SM::s::s2::s21::s211::D}
        case D_SIG: {
            static struct {
                QP::QMState const *target;
                QP::QActionHandler act[3];
            } const tatbl_ = { // tran-action table
                &s21_s, // target state
                {
                    Q_ACTION_CAST(&s211_x), // exit
                    Q_ACTION_CAST(&s21_i), // initial tran.
                    Q_ACTION_CAST(0) // zero terminator
                }
            };
            BSP_display("s211-D;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
//$enddef${SMs::QMsmTst} #####################################################

} // namespace QMSMTST