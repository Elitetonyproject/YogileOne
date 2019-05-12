/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ecrs.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_ECRS,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_ECRS,0,reason)

static ERR_STRING_DATA ECRS_str_functs[] = {
    {ERR_FUNC(ECRS_F_ECRS_DO_SIGN), "ECRS_do_sign"},
    {ERR_FUNC(ECRS_F_ECRS_DO_VERIFY), "ECRS_do_verify"},
    {ERR_FUNC(ECRS_F_ECRS_SIGN), "ECRS_sign"},
    {ERR_FUNC(ECRS_F_ECRS_VERIFY), "ECRS_verify"},
    {0, NULL}
};

static ERR_STRING_DATA ECRS_str_reasons[] = {
    {ERR_REASON(ECRS_R_EC_KEY_NOT_MATCH), "ec key not match"},
    {ERR_REASON(ECRS_R_INVALID_DIGEST_ALGOR), "invalid digest algor"},
    {ERR_REASON(ECRS_R_NO_SIGNING_KEY), "no signing key"},
    {ERR_REASON(ECRS_R_PARSE_SIGNATURE_FAILURE), "parse signature failure"},
    {ERR_REASON(ECRS_R_PUBLIC_KEYS_NOT_MATCH), "public keys not match"},
    {ERR_REASON(ECRS_R_PUBLIC_KEYS_NOT_MATCH_SIG),
     "public keys not match sig"},
    {0, NULL}
};

#endif

int ERR_load_ECRS_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(ECRS_str_functs[0].error) == NULL) {
        ERR_load_strings(0, ECRS_str_functs);
        ERR_load_strings(0, ECRS_str_reasons);
    }
#endif
    return 1;
}
