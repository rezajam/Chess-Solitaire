/*
 * Code for class OBJ_SETUP_CHESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1129_9972(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1129_9973(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1129_9974(EIF_REFERENCE);
extern void F1129_9975(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1129_9976(EIF_REFERENCE);
extern void F1129_9977(EIF_REFERENCE);
extern void F1129_9978(EIF_REFERENCE);
extern void EIF_Minit1129(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OBJ_SETUP_CHESS}.sav_row */
EIF_TYPED_VALUE F1129_9972 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7624,Dtype(Current)));
	return r;
}


/* {OBJ_SETUP_CHESS}.sav_col */
EIF_TYPED_VALUE F1129_9973 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7625,Dtype(Current)));
	return r;
}


/* {OBJ_SETUP_CHESS}.sav_c */
EIF_TYPED_VALUE F1129_9974 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7626,Dtype(Current)));
	return r;
}


/* {OBJ_SETUP_CHESS}.make */
void F1129_9975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	struct eif_ex_980 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(980, 0x00).id);
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1128, Current, 1, 3, 16221);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1128, Current, 16221);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7617, 0xF80003D6, 0); /* model */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6304, "m", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7617, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7624, 0x10000000, 1); /* sav_row */
	*(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7625, 0x10000000, 1); /* sav_col */
	*(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7626, 0x10000000, 1); /* sav_c */
	*(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef arg3
#undef arg2
#undef arg1
}

/* {OBJ_SETUP_CHESS}.execute */
void F1129_9976 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "execute";
	RTEX;
	struct eif_ex_980 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(980, 0x00).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1128, Current, 1, 0, 16222);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1128, Current, 16222);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7617, 0xF80003D6, 0); /* model */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6304, "m", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7617, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		tr1 = RTLN(eif_new_type(1143, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
		RTNHOOK(3,3);
		ur1 = RTCCL(tr1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(5,2);
			tr1 = RTLN(eif_new_type(1142, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
			RTNHOOK(5,3);
			ur1 = RTCCL(tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
		} else {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(7,2);
				tr1 = RTLN(eif_new_type(1147, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
				RTNHOOK(7,3);
				ur1 = RTCCL(tr1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
				ui4_1 = ti4_1;
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
			} else {
				RTHOOK(8);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(9,2);
					tr1 = RTLN(eif_new_type(1145, 0x01).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
					RTNHOOK(9,3);
					ur1 = RTCCL(tr1);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
					ui4_1 = ti4_1;
					ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
					ui4_2 = ti4_2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
				} else {
					RTHOOK(10);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L))) {
						RTHOOK(11);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(11,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(11,2);
						tr1 = RTLN(eif_new_type(1146, 0x01).id);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
						RTNHOOK(11,3);
						ur1 = RTCCL(tr1);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
						ui4_2 = ti4_2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
					} else {
						RTHOOK(12);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7626, dtype));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 6L))) {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(13,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(13,2);
							tr1 = RTLN(eif_new_type(1144, 0x01).id);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
							RTNHOOK(13,3);
							ur1 = RTCCL(tr1);
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
							ui4_1 = ti4_1;
							ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
							ui4_2 = ti4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
						}
					}
				}
			}
		}
	}
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6318, "i_setter", tr1))(tr1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {OBJ_SETUP_CHESS}.undo */
void F1129_9977 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "undo";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1128, Current, 0, 0, 16223);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1128, Current, 16223);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6306, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(1,2);
	tr1 = RTLN(eif_new_type(1148, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr1)))(tr1);
	RTNHOOK(1,3);
	ur1 = RTCCL(tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7624, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7625, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr2))(tr2, ur1x, ui4_1x, ui4_2x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = ((EIF_INTEGER_32) -1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6318, "i_setter", tr1))(tr1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {OBJ_SETUP_CHESS}.redo */
void F1129_9978 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "redo";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1128, Current, 0, 0, 16224);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1128, Current, 16224);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7628, "execute", Current))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1129 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
