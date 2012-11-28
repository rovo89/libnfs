/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "libnfs-zdr.h"
#include "libnfs-raw-portmap.h"

bool_t
zdr_pmap_mapping (ZDR *zdrs, pmap_mapping *objp)
{
	register int32_t *buf;
	buf = NULL;


	if (zdrs->x_op == ZDR_ENCODE) {
		buf = ZDR_INLINE (zdrs, 4 * BYTES_PER_ZDR_UNIT);
		if (buf == NULL) {
			 if (!zdr_u_int (zdrs, &objp->prog))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->vers))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->prot))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->port))
				 return FALSE;
		} else {
			IZDR_PUT_U_LONG(buf, objp->prog);
			IZDR_PUT_U_LONG(buf, objp->vers);
			IZDR_PUT_U_LONG(buf, objp->prot);
			IZDR_PUT_U_LONG(buf, objp->port);
		}
		return TRUE;
	} else if (zdrs->x_op == ZDR_DECODE) {
		buf = ZDR_INLINE (zdrs, 4 * BYTES_PER_ZDR_UNIT);
		if (buf == NULL) {
			 if (!zdr_u_int (zdrs, &objp->prog))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->vers))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->prot))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->port))
				 return FALSE;
		} else {
			objp->prog = IZDR_GET_U_LONG(buf);
			objp->vers = IZDR_GET_U_LONG(buf);
			objp->prot = IZDR_GET_U_LONG(buf);
			objp->port = IZDR_GET_U_LONG(buf);
		}
	 return TRUE;
	}

	 if (!zdr_u_int (zdrs, &objp->prog))
		 return FALSE;
	 if (!zdr_u_int (zdrs, &objp->vers))
		 return FALSE;
	 if (!zdr_u_int (zdrs, &objp->prot))
		 return FALSE;
	 if (!zdr_u_int (zdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_pmap_call_args (ZDR *zdrs, pmap_call_args *objp)
{
	register int32_t *buf;
	buf = NULL;


	if (zdrs->x_op == ZDR_ENCODE) {
		buf = ZDR_INLINE (zdrs, 3 * BYTES_PER_ZDR_UNIT);
		if (buf == NULL) {
			 if (!zdr_u_int (zdrs, &objp->prog))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->vers))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->proc))
				 return FALSE;

		} else {
		IZDR_PUT_U_LONG(buf, objp->prog);
		IZDR_PUT_U_LONG(buf, objp->vers);
		IZDR_PUT_U_LONG(buf, objp->proc);
		}
		 if (!zdr_bytes (zdrs, (char **)&objp->args.args_val, (u_int *) &objp->args.args_len, ~0))
			 return FALSE;
		return TRUE;
	} else if (zdrs->x_op == ZDR_DECODE) {
		buf = ZDR_INLINE (zdrs, 3 * BYTES_PER_ZDR_UNIT);
		if (buf == NULL) {
			 if (!zdr_u_int (zdrs, &objp->prog))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->vers))
				 return FALSE;
			 if (!zdr_u_int (zdrs, &objp->proc))
				 return FALSE;

		} else {
		objp->prog = IZDR_GET_U_LONG(buf);
		objp->vers = IZDR_GET_U_LONG(buf);
		objp->proc = IZDR_GET_U_LONG(buf);
		}
		 if (!zdr_bytes (zdrs, (char **)&objp->args.args_val, (u_int *) &objp->args.args_len, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!zdr_u_int (zdrs, &objp->prog))
		 return FALSE;
	 if (!zdr_u_int (zdrs, &objp->vers))
		 return FALSE;
	 if (!zdr_u_int (zdrs, &objp->proc))
		 return FALSE;
	 if (!zdr_bytes (zdrs, (char **)&objp->args.args_val, (u_int *) &objp->args.args_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
zdr_pmap_call_result (ZDR *zdrs, pmap_call_result *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_u_int (zdrs, &objp->port))
		 return FALSE;
	 if (!zdr_bytes (zdrs, (char **)&objp->res.res_val, (u_int *) &objp->res.res_len, ~0))
		 return FALSE;
	return TRUE;
}