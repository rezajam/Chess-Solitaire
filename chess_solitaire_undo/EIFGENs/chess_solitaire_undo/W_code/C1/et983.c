/*
 * Code for class ETF_MODEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F983_8517(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8518(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8519(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8520(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8521(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8522(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8523(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8524(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8525(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8526(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8527(EIF_REFERENCE);
extern void F983_8528(EIF_REFERENCE);
extern void F983_8529(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F983_8530(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F983_8531(EIF_REFERENCE);
extern void F983_8532(EIF_REFERENCE);
extern void F983_8533(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F983_8534(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F983_8535(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F983_8536(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F983_8537(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F983_8538(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F983_8539(EIF_REFERENCE);
extern void F983_8540(EIF_REFERENCE);
extern void F983_8541(EIF_REFERENCE);
extern void F983_8542(EIF_REFERENCE);
extern void F983_8543(EIF_REFERENCE);
extern EIF_TYPED_VALUE F983_8544(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F983_8545(EIF_REFERENCE);
extern void EIF_Minit983(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_MODEL}.make */
void F983_8517 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA(l_feature_name, 982, Current, 0, 0, 14887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14887);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6313, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(6313, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6306, 0xF8000652, 0); /* board */
	tr1 = RTLNSMART(RTWCT(6306, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1148, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2783, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6306, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6307, 0xF8000652, 0); /* page */
	tr1 = RTLNSMART(RTWCT(6307, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1148, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2783, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(3,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6307, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6309, 0xF80000E8, 0); /* error */
	tr1 = RTLNSMART(RTWCT(6309, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("",0,0);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6309, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6310, 0x04000000, 1); /* started */
	*(EIF_BOOLEAN *)(Current + RTWA(6310, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6311, 0x04000000, 1); /* won */
	*(EIF_BOOLEAN *)(Current + RTWA(6311, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6312, 0x04000000, 1); /* lost */
	*(EIF_BOOLEAN *)(Current + RTWA(6312, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 6314, 0xF8000154, 0); /* ur_save */
	tr1 = RTLNSMART(RTWCT(6314, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6314, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 6315, 0x10000000, 1); /* ur_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {ETF_MODEL}.board */
EIF_TYPED_VALUE F983_8518 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6306,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.page */
EIF_TYPED_VALUE F983_8519 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6307,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.move_call_out */
EIF_TYPED_VALUE F983_8520 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6308,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.error */
EIF_TYPED_VALUE F983_8521 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6309,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.started */
EIF_TYPED_VALUE F983_8522 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6310,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.won */
EIF_TYPED_VALUE F983_8523 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6311,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.lost */
EIF_TYPED_VALUE F983_8524 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6312,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.i */
EIF_TYPED_VALUE F983_8525 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6313,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.ur_save */
EIF_TYPED_VALUE F983_8526 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6314,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.ur_count */
EIF_TYPED_VALUE F983_8527 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6315,Dtype(Current)));
	return r;
}


/* {ETF_MODEL}.ur_reset */
void F983_8528 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ur_reset";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA(l_feature_name, 982, Current, 0, 0, 14869);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14869);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6313, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(6313, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6306, 0xF8000652, 0); /* board */
	tr1 = RTLNSMART(RTWCT(6306, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1148, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2783, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6306, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6307, 0xF8000652, 0); /* page */
	tr1 = RTLNSMART(RTWCT(6307, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1148, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2783, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(3,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6307, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6309, 0xF80000E8, 0); /* error */
	tr1 = RTLNSMART(RTWCT(6309, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("",0,0);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6309, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6310, 0x04000000, 1); /* started */
	*(EIF_BOOLEAN *)(Current + RTWA(6310, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6311, 0x04000000, 1); /* won */
	*(EIF_BOOLEAN *)(Current + RTWA(6311, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6312, 0x04000000, 1); /* lost */
	*(EIF_BOOLEAN *)(Current + RTWA(6312, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {ETF_MODEL}.start_bool */
void F983_8529 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "start_bool";
	RTEX;
#define arg1 arg1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 1, 14870);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14870);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6310, 0x04000000, 1); /* started */
	*(EIF_BOOLEAN *)(Current + RTWA(6310, dtype)) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ETF_MODEL}.i_setter */
void F983_8530 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "i_setter";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 1, 14871);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14871);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6313, 0x10000000, 1); /* i */
	(*(EIF_INTEGER_32 *)(Current + RTWA(6313, dtype))) += arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ETF_MODEL}.undo */
void F983_8531 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "undo";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 982, Current, 1, 0, 14872);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14872);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6315, 0x10000000, 1); /* ur_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype)))--;
	RTHOOK(2);
	RTDBGAL(1, 0xF800046A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1130, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7632, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
}

/* {ETF_MODEL}.redo */
void F983_8532 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "redo";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 982, Current, 1, 0, 14873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14873);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6315, 0x10000000, 1); /* ur_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype)))++;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000469, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1129, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7631, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
}

/* {ETF_MODEL}.set_error */
void F983_8533 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_error";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 1, 14874);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14874);
	RTCC(arg1, 982, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6309, 0xF80000E8, 0); /* error */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6309, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ETF_MODEL}.setup_chess */
void F983_8534 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "setup_chess";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 982, Current, 1, 3, 14875);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14875);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_chess", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 6L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("game_not_started", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_won", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 != (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_lost", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 != (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("is_valid", EX_PRE);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6325, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("is_occupied", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN) !!RTEQ(tr1, RTMS_EX_H(".",1,46)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(1, 0xF8000468, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1128, 0x01).id);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7627, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(7,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7628, "execute", loc1))(loc1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 6315, 0x10000000, 1); /* ur_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype)))++;
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6314, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ur1 = RTCCL(loc1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", tr1))(tr1, ur1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {ETF_MODEL}.moves */
void F983_8535 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "moves";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 982, Current, 2, 2, 14876);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14876);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("game_has_started", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_won", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 != (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_lost", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 != (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_valid", EX_PRE);
		ui4_1 = arg1;
		ui4_2 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6325, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_occupied", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = arg1;
		ui4_2 = arg2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN) !RTEQ(tr1, RTMS_EX_H(".",1,46)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6307, 0xF8000652, 0); /* page */
	tr1 = RTLNSMART(RTWCT(6307, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1148, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
	RTNHOOK(6,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2783, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(6,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6307, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAL(1, 0xF8000154, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ui4_1 = arg1;
	ui4_2 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7767, "moves", tr2))(tr2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(8,1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr2))(tr2, ui4_1x, ui4_2x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	ur1 = RTCCL(tr3);
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 6308, 0x04000000, 1); /* move_call_out */
	*(EIF_BOOLEAN *)(Current + RTWA(6308, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(11);
		tb2 = '\0';
		tb3 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
			tb3 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 4L));
		}
		if (tb3) {
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,3);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,4);
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
				tb3 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 4L));
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTLN(eif_new_type(1149, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
			RTNHOOK(12,1);
			ur1 = RTCCL(tr2);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(12,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr3))(tr3, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(12,3);
			ui4_2 = ((EIF_INTEGER_32) 2L);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr3))(tr3, ui4_2x)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2788, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		}
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {ETF_MODEL}.move_and_capture */
void F983_8536 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "move_and_capture";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
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
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 982, Current, 3, 4, 14877);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14877);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("game_has_started", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_won", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 != (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_lost", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 != (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_valid", EX_PRE);
		tb1 = '\0';
		ui4_1 = arg1;
		ui4_2 = arg2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6325, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		if (tb2) {
			ui4_1 = arg3;
			ui4_2 = arg4;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6325, dtype))(Current, ui4_1x, ui4_2x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("is_occupied", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = arg1;
		ui4_2 = arg2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN) !RTEQ(tr1, RTMS_EX_H(".",1,46)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("on_the_path", EX_PRE);
		RTHOOK(7);
		ui4_1 = arg1;
		ui4_2 = arg2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6326, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr2);
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(8);
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
				tb3 = (EIF_BOOLEAN)(arg4 == ti4_1);
			}
			tb1 = tb3;
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc2))(loc2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(10);
		RTCT("block_exist", EX_PRE);
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = arg1;
		ui4_2 = arg2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = (EIF_INTEGER_32) (arg3 - arg1);
		ui4_4 = (EIF_INTEGER_32) (arg4 - arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7768, "blocked_out", tr2))(tr2, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr2);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ui4_2 = ((EIF_INTEGER_32) 2L);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_2x)).it_i4);
			ui4_2 = ti4_2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTEQ(tr1, RTMS_EX_H(".",1,46));
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc3))(loc3);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(14);
	RTDBGAL(1, 0xF8000467, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1127, 0x01).id);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7623, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(14,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6314, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(15,1);
	ur1 = RTCCL(loc1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6314, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(15,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", tr2))(tr2)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", tr1))(tr1, ur1x, ui4_1x);
	RTHOOK(16);
	RTDBGAA(Current, dtype, 6315, 0x10000000, 1); /* ur_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ETF_MODEL}.is_valid */
EIF_TYPED_VALUE F983_8537 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 2, 14878);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14878);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 4L)) && (EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 4L))) && (EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {ETF_MODEL}.valid_ones */
EIF_TYPED_VALUE F983_8538 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "valid_ones";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 982, Current, 2, 2, 14879);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14879);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000154, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ui4_1 = arg1;
	ui4_2 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7767, "moves", tr2))(tr2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(4);
		tb2 = '\0';
		tb3 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
			tb3 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 4L));
		}
		if (tb3) {
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,3);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(4,4);
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_1x)).it_i4);
				tb3 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 4L));
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_1x)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,2);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_1x)).it_i4);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
			ur1 = RTCCL(tr1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", Result))(Result)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", Result))(Result, ur1x, ui4_1x);
		}
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {ETF_MODEL}.reset */
void F983_8539 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
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
	
	RTEAA(l_feature_name, 982, Current, 0, 0, 14880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14880);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6305, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ETF_MODEL}.start_game */
void F983_8540 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start_game";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 982, Current, 1, 0, 14881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14881);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("game_already_started", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_won", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 != (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_lost", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1) && (EIF_BOOLEAN)(tb2 != (EIF_BOOLEAN) 1)) && (EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0xF8000466, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1126, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7618, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6314, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ur1 = RTCCL(loc1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6314, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(5,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", tr2))(tr2)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", tr1))(tr1, ur1x, ui4_1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6315, 0x10000000, 1); /* ur_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(6315, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {ETF_MODEL}.reset_game */
void F983_8541 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_game";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 0, 14882);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14882);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("game_has_started", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
		RTTE((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6305, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ETF_MODEL}.is_win */
void F983_8542 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_win";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 0, 14883);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14883);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6313, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 6311, 0x04000000, 1); /* won */
		*(EIF_BOOLEAN *)(Current + RTWA(6311, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 6312, 0x04000000, 1); /* lost */
		*(EIF_BOOLEAN *)(Current + RTWA(6312, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ETF_MODEL}.is_lose */
void F983_8543 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_lose";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 982, Current, 5, 0, 14884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14884);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6312, 0x04000000, 1); /* lost */
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tr1 = RTLN(eif_new_type(221, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4487, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc1))(loc1)).it_b);
		if (tb2) break;
		RTHOOK(3);
		RTHOOK(4);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tr1 = RTLN(eif_new_type(221, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4487, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb3 = EIF_TRUE;
		for (;;) {
			if (!tb3) break;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc2))(loc2)).it_b);
			if (tb4) break;
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
			ui4_2 = ti4_2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if (RTEQ(tr1, RTMS_EX_H("N",1,78))) {
				RTHOOK(6);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc1))(loc1)).it_i4);
				ui4_1 = ti4_1;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
				ui4_2 = ti4_2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6326, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr2);
				tb5 = EIF_TRUE;
				for (;;) {
					if (!tb5) break;
					tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc3))(loc3)).it_b);
					if (tb6) break;
					RTHOOK(7);
					RTHOOK(8);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc1))(loc1)).it_i4);
					ui4_1 = ti4_1;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
					ui4_2 = ti4_2;
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc1))(loc1)).it_i4);
					ui4_1 = ti4_1;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
					ui4_2 = ti4_2;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_3 = ((EIF_INTEGER_32) 1L);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_3x)).it_i4);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc1))(loc1)).it_i4);
					ui4_3 = (EIF_INTEGER_32) (ti4_3 - ti4_4);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_4 = ((EIF_INTEGER_32) 2L);
					ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr1))(tr1, ui4_4x)).it_i4);
					ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
					ui4_4 = (EIF_INTEGER_32) (ti4_5 - ti4_6);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7768, "blocked_out", tr2))(tr2, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc4 = (EIF_REFERENCE) RTCCL(tr2);
					tb7 = EIF_FALSE;
					for (;;) {
						if (tb7) break;
						tb8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc4))(loc4)).it_b);
						if (tb8) break;
						RTHOOK(9);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc4))(loc4)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 1L);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_1x)).it_i4);
						ui4_1 = ti4_1;
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc4))(loc4)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ui4_2 = ((EIF_INTEGER_32) 2L);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_2x)).it_i4);
						ui4_2 = ti4_2;
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tb7 = !RTEQ(tr1, RTMS_EX_H(".",1,46));
						RTHOOK(10);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc4))(loc4);
					}
					tb5 = tb7;
					RTHOOK(11);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc3))(loc3);
				}
			} else {
				RTHOOK(12);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc1))(loc1)).it_i4);
				ui4_1 = ti4_1;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
				ui4_2 = ti4_2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6326, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				loc5 = (EIF_REFERENCE) RTCCL(tr2);
				tb6 = EIF_TRUE;
				for (;;) {
					if (!tb6) break;
					tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc5))(loc5)).it_b);
					if (tb7) break;
					RTHOOK(13);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_1x)).it_i4);
					ui4_1 = ti4_1;
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ui4_2 = ((EIF_INTEGER_32) 2L);
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", tr2))(tr2, ui4_2x)).it_i4);
					ui4_2 = ti4_2;
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2785, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tb6 = RTEQ(tr1, RTMS_EX_H(".",1,46));
					RTHOOK(14);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc5))(loc5);
				}
				tb5 = tb6;
			}
			tb3 = tb5;
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc2))(loc2);
		}
		tb1 = tb3;
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc1))(loc1);
	}
	*(EIF_BOOLEAN *)(Current + RTWA(6312, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(17);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
		RTHOOK(18);
		RTDBGAA(Current, dtype, 6312, 0x04000000, 1); /* lost */
		*(EIF_BOOLEAN *)(Current + RTWA(6312, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
}

/* {ETF_MODEL}.out_board_style */
EIF_TYPED_VALUE F983_8544 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "out_board_style";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 982, Current, 2, 1, 14885);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14885);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1618,0xFF01,1141,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 982, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	tr2 = RTMS_EX_H("",0,0);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("\012  ",3,663584);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		}
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7765, "id", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_MODEL}.out */
EIF_TYPED_VALUE F983_8545 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 982, Current, 0, 0, 14886);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(982, Current, 14886);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	tr2 = RTMS_EX_H("",0,0);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("  # of chess pieces on board: ",30,765338656);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6313, dtype));
	tr2 = c_outi(ti4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\012  ",3,663584);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6308, dtype));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
		RTHOOK(4);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6311, dtype));
			tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("Game Over: You Win!",19,844140833);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		} else {
			RTHOOK(6);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
			if (tb2) {
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6312, dtype));
				tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
			}
			if (tb1) {
				RTHOOK(7);
				tr1 = RTMS_EX_H("Game Over: You Lose!",20,1452996385);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
			} else {
				RTHOOK(8);
				tb1 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
				if (tb2) {
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
					tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0);
				}
				if (tb1) {
					RTHOOK(9);
					tr1 = RTMS_EX_H("Game being Setup...",19,1765544494);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
				} else {
					RTHOOK(10);
					tb1 = '\0';
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(10,1);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
					if (tb2) {
						tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6310, dtype));
						tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
					}
					if (tb1) {
						RTHOOK(11);
						tr1 = RTMS_EX_H("Game In Progress...",19,375060270);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
					} else {
						RTHOOK(12);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(12,1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
						}
					}
				}
			}
		}
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6332, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	} else {
		RTHOOK(15);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6308, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTHOOK(16);
			tr1 = RTMS_EX_H("Game In Progress...",19,375060270);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6332, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			tr2 = RTLN(eif_new_type(1148, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7766, Dtype(tr2)))(tr2);
			RTNHOOK(18,2);
			ur1 = RTCCL(tr2);
			ui4_1 = ((EIF_INTEGER_32) 4L);
			ui4_2 = ((EIF_INTEGER_32) 4L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2783, "make_filled", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(19);
			RTDBGAA(Current, dtype, 6308, 0x04000000, 1); /* move_call_out */
			*(EIF_BOOLEAN *)(Current + RTWA(6308, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTHOOK(20);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4643, "make_empty", tr1))(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

void EIF_Minit983 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
