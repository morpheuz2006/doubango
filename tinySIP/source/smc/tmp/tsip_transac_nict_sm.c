/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : tsip_transac_nict.sm
 */


/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou@yahoo.fr>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tsip_transac_nict.sm
 * @brief SIP Non-INVITE Client Transaction as per RFC 3261 subcaluse 17.1.2.
 *
 * @author Mamadou Diop <diopmamadou(at)yahoo.fr>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */


#include <assert.h>
#include "tinysip/transactions/tsip_transac_nict.h"
#include "tsk_debug.h"
#include "C:\Projects\Doubango\tinySIP\include\tinysip\smc\tsip_transac_nict_sm.h"

#define getOwner(fsm) \
    (fsm)->_owner

#define POPULATE_STATE(state) \
    state##_sm_1xx, \
    state##_sm_200_to_699, \
    state##_sm_send, \
    state##_sm_timerE, \
    state##_sm_timerF, \
    state##_sm_timerK, \
    state##_sm_transportError, \
    state##_Default

#define ENTRY_STATE(state)

#define EXIT_STATE(state)

static void tsip_transac_nictState_sm_1xx(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_sm_200_to_699(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_sm_send(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_sm_timerE(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_sm_timerF(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_sm_timerK(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_sm_transportError(struct tsip_transac_nictContext *fsm)
{
    getState(fsm)->Default(fsm);
}

static void tsip_transac_nictState_Default(struct tsip_transac_nictContext *fsm)
{
    State_Default(fsm);
}

#define tsip_transac_nict_Started_sm_1xx tsip_transac_nictState_sm_1xx
#define tsip_transac_nict_Started_sm_200_to_699 tsip_transac_nictState_sm_200_to_699
#define tsip_transac_nict_Started_sm_send tsip_transac_nictState_sm_send
#define tsip_transac_nict_Started_sm_timerE tsip_transac_nictState_sm_timerE
#define tsip_transac_nict_Started_sm_timerF tsip_transac_nictState_sm_timerF
#define tsip_transac_nict_Started_sm_timerK tsip_transac_nictState_sm_timerK
#define tsip_transac_nict_Started_sm_transportError tsip_transac_nictState_sm_transportError
#define tsip_transac_nict_Started_Default tsip_transac_nictState_Default
#define tsip_transac_nict_Started_Entry NULL
#define tsip_transac_nict_Started_Exit NULL
#define tsip_transac_nict_Trying_sm_1xx tsip_transac_nictState_sm_1xx
#define tsip_transac_nict_Trying_sm_200_to_699 tsip_transac_nictState_sm_200_to_699
#define tsip_transac_nict_Trying_sm_send tsip_transac_nictState_sm_send
#define tsip_transac_nict_Trying_sm_timerE tsip_transac_nictState_sm_timerE
#define tsip_transac_nict_Trying_sm_timerF tsip_transac_nictState_sm_timerF
#define tsip_transac_nict_Trying_sm_timerK tsip_transac_nictState_sm_timerK
#define tsip_transac_nict_Trying_sm_transportError tsip_transac_nictState_sm_transportError
#define tsip_transac_nict_Trying_Default tsip_transac_nictState_Default
#define tsip_transac_nict_Trying_Entry NULL
#define tsip_transac_nict_Trying_Exit NULL
#define tsip_transac_nict_Proceeding_sm_1xx tsip_transac_nictState_sm_1xx
#define tsip_transac_nict_Proceeding_sm_200_to_699 tsip_transac_nictState_sm_200_to_699
#define tsip_transac_nict_Proceeding_sm_send tsip_transac_nictState_sm_send
#define tsip_transac_nict_Proceeding_sm_timerE tsip_transac_nictState_sm_timerE
#define tsip_transac_nict_Proceeding_sm_timerF tsip_transac_nictState_sm_timerF
#define tsip_transac_nict_Proceeding_sm_timerK tsip_transac_nictState_sm_timerK
#define tsip_transac_nict_Proceeding_sm_transportError tsip_transac_nictState_sm_transportError
#define tsip_transac_nict_Proceeding_Default tsip_transac_nictState_Default
#define tsip_transac_nict_Proceeding_Entry NULL
#define tsip_transac_nict_Proceeding_Exit NULL
#define tsip_transac_nict_Completed_sm_1xx tsip_transac_nictState_sm_1xx
#define tsip_transac_nict_Completed_sm_200_to_699 tsip_transac_nictState_sm_200_to_699
#define tsip_transac_nict_Completed_sm_send tsip_transac_nictState_sm_send
#define tsip_transac_nict_Completed_sm_timerE tsip_transac_nictState_sm_timerE
#define tsip_transac_nict_Completed_sm_timerF tsip_transac_nictState_sm_timerF
#define tsip_transac_nict_Completed_sm_timerK tsip_transac_nictState_sm_timerK
#define tsip_transac_nict_Completed_sm_transportError tsip_transac_nictState_sm_transportError
#define tsip_transac_nict_Completed_Default tsip_transac_nictState_Default
#define tsip_transac_nict_Completed_Entry NULL
#define tsip_transac_nict_Completed_Exit NULL
#define tsip_transac_nict_Terminated_sm_1xx tsip_transac_nictState_sm_1xx
#define tsip_transac_nict_Terminated_sm_200_to_699 tsip_transac_nictState_sm_200_to_699
#define tsip_transac_nict_Terminated_sm_send tsip_transac_nictState_sm_send
#define tsip_transac_nict_Terminated_sm_timerE tsip_transac_nictState_sm_timerE
#define tsip_transac_nict_Terminated_sm_timerF tsip_transac_nictState_sm_timerF
#define tsip_transac_nict_Terminated_sm_timerK tsip_transac_nictState_sm_timerK
#define tsip_transac_nict_Terminated_sm_transportError tsip_transac_nictState_sm_transportError
#define tsip_transac_nict_Terminated_Default tsip_transac_nictState_Default
#define tsip_transac_nict_Terminated_Entry NULL
#define tsip_transac_nict_Terminated_Exit NULL
#define tsip_transac_nict_DefaultState_sm_1xx tsip_transac_nictState_sm_1xx
#define tsip_transac_nict_DefaultState_sm_200_to_699 tsip_transac_nictState_sm_200_to_699
#define tsip_transac_nict_DefaultState_sm_send tsip_transac_nictState_sm_send
#define tsip_transac_nict_DefaultState_sm_timerE tsip_transac_nictState_sm_timerE
#define tsip_transac_nict_DefaultState_sm_timerF tsip_transac_nictState_sm_timerF
#define tsip_transac_nict_DefaultState_sm_timerK tsip_transac_nictState_sm_timerK
#define tsip_transac_nict_DefaultState_sm_transportError tsip_transac_nictState_sm_transportError

#undef tsip_transac_nict_Started_sm_send
static void tsip_transac_nict_Started_sm_send(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Started_2_Trying_X_send(ctxt);
    setState(fsm, &tsip_transac_nict_Trying);
    ENTRY_STATE(getState(fsm));
}

const struct tsip_transac_nictState tsip_transac_nict_Started = { POPULATE_STATE(tsip_transac_nict_Started), "tsip_transac_nict_Started", 0 };

#undef tsip_transac_nict_Trying_Default
static void tsip_transac_nict_Trying_Default(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);
    const struct tsip_transac_nictState* EndStateName = getState(fsm);

    clearState(fsm);
    tsip_transac_nict_Trying_2_Trying_X_unknown(ctxt);
    setState(fsm, EndStateName);
}

#undef tsip_transac_nict_Trying_sm_1xx
static void tsip_transac_nict_Trying_sm_1xx(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Trying_2_Proceedding_X_1xx(ctxt);
    setState(fsm, &tsip_transac_nict_Proceeding);
    ENTRY_STATE(getState(fsm));
}

#undef tsip_transac_nict_Trying_sm_200_to_699
static void tsip_transac_nict_Trying_sm_200_to_699(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Trying_2_Completed_X_200_to_699(ctxt);
    setState(fsm, &tsip_transac_nict_Completed);
    ENTRY_STATE(getState(fsm));
}

#undef tsip_transac_nict_Trying_sm_timerE
static void tsip_transac_nict_Trying_sm_timerE(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);
    const struct tsip_transac_nictState* EndStateName = getState(fsm);

    clearState(fsm);
    tsip_transac_nict_Trying_2_Trying_X_timerE(ctxt);
    setState(fsm, EndStateName);
}

#undef tsip_transac_nict_Trying_sm_timerF
static void tsip_transac_nict_Trying_sm_timerF(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Trying_2_Terminated_X_timerF(ctxt);
    setState(fsm, &tsip_transac_nict_Terminated);
    ENTRY_STATE(getState(fsm));
}

#undef tsip_transac_nict_Trying_sm_transportError
static void tsip_transac_nict_Trying_sm_transportError(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Trying_2_Terminated_X_transportError(ctxt);
    setState(fsm, &tsip_transac_nict_Terminated);
    ENTRY_STATE(getState(fsm));
}

const struct tsip_transac_nictState tsip_transac_nict_Trying = { POPULATE_STATE(tsip_transac_nict_Trying), "tsip_transac_nict_Trying", 1 };

#undef tsip_transac_nict_Proceeding_sm_1xx
static void tsip_transac_nict_Proceeding_sm_1xx(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);
    const struct tsip_transac_nictState* EndStateName = getState(fsm);

    clearState(fsm);
    tsip_transac_nict_Proceeding_2_Proceeding_X_1xx(ctxt);
    setState(fsm, EndStateName);
}

#undef tsip_transac_nict_Proceeding_sm_200_to_699
static void tsip_transac_nict_Proceeding_sm_200_to_699(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Proceeding_2_Completed_X_200_to_699(ctxt);
    setState(fsm, &tsip_transac_nict_Completed);
    ENTRY_STATE(getState(fsm));
}

#undef tsip_transac_nict_Proceeding_sm_timerE
static void tsip_transac_nict_Proceeding_sm_timerE(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);
    const struct tsip_transac_nictState* EndStateName = getState(fsm);

    clearState(fsm);
    tsip_transac_nict_Proceeding_2_Proceeding_X_timerE(ctxt);
    setState(fsm, EndStateName);
}

#undef tsip_transac_nict_Proceeding_sm_timerF
static void tsip_transac_nict_Proceeding_sm_timerF(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Proceeding_2_Terminated_X_timerF(ctxt);
    setState(fsm, &tsip_transac_nict_Terminated);
    ENTRY_STATE(getState(fsm));
}

#undef tsip_transac_nict_Proceeding_sm_transportError
static void tsip_transac_nict_Proceeding_sm_transportError(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Proceeding_2_Terminated_X_transportError(ctxt);
    setState(fsm, &tsip_transac_nict_Terminated);
    ENTRY_STATE(getState(fsm));
}

const struct tsip_transac_nictState tsip_transac_nict_Proceeding = { POPULATE_STATE(tsip_transac_nict_Proceeding), "tsip_transac_nict_Proceeding", 2 };

#undef tsip_transac_nict_Completed_sm_timerK
static void tsip_transac_nict_Completed_sm_timerK(struct tsip_transac_nictContext *fsm)
{
    struct tsip_transac_nict* ctxt = getOwner(fsm);

    EXIT_STATE(getState(fsm));
    clearState(fsm);
    tsip_transac_nict_Completed_2_Terminated_X_timerK(ctxt);
    setState(fsm, &tsip_transac_nict_Terminated);
    ENTRY_STATE(getState(fsm));
}

const struct tsip_transac_nictState tsip_transac_nict_Completed = { POPULATE_STATE(tsip_transac_nict_Completed), "tsip_transac_nict_Completed", 3 };

const struct tsip_transac_nictState tsip_transac_nict_Terminated = { POPULATE_STATE(tsip_transac_nict_Terminated), "tsip_transac_nict_Terminated", 4 };

void tsip_transac_nictContext_Init(struct tsip_transac_nictContext* fsm, struct tsip_transac_nict* owner)
{
    FSM_INIT(fsm, &tsip_transac_nict_Started);
    fsm->_owner = owner;
}

void tsip_transac_nictContext_sm_1xx(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_1xx");
    state->sm_1xx(fsm);
    setTransition(fsm, NULL);
}

void tsip_transac_nictContext_sm_200_to_699(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_200_to_699");
    state->sm_200_to_699(fsm);
    setTransition(fsm, NULL);
}

void tsip_transac_nictContext_sm_send(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_send");
    state->sm_send(fsm);
    setTransition(fsm, NULL);
}

void tsip_transac_nictContext_sm_timerE(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_timerE");
    state->sm_timerE(fsm);
    setTransition(fsm, NULL);
}

void tsip_transac_nictContext_sm_timerF(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_timerF");
    state->sm_timerF(fsm);
    setTransition(fsm, NULL);
}

void tsip_transac_nictContext_sm_timerK(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_timerK");
    state->sm_timerK(fsm);
    setTransition(fsm, NULL);
}

void tsip_transac_nictContext_sm_transportError(struct tsip_transac_nictContext* fsm)
{
    const struct tsip_transac_nictState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "sm_transportError");
    state->sm_transportError(fsm);
    setTransition(fsm, NULL);
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
