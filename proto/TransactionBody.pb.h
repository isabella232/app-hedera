/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Tue Oct 22 16:32:22 2019. */

#ifndef PB_TRANSACTIONBODY_PB_H_INCLUDED
#define PB_TRANSACTIONBODY_PB_H_INCLUDED
#include <pb.h>

#include "BasicTypes.pb.h"

#include "CryptoCreateTransactionBody.pb.h"

#include "CryptoTransferTransactionBody.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _HederaTransactionBody {
    HederaTransactionID transactionID;
    HederaAccountID nodeAccountID;
    uint64_t transactionFee;
    HederaDuration transactionValidDuration;
    bool generateRecord;
    char memo[128];
    pb_size_t which_data;
    union {
        HederaCryptoCreateTransactionBody cryptoCreateAccount;
        HederaCryptoTransferTransactionBody cryptoTransfer;
    } data;
/* @@protoc_insertion_point(struct:HederaTransactionBody) */
} HederaTransactionBody;

/* Default values for struct fields */

/* Initializer values for message structs */
#define HederaTransactionBody_init_default       {HederaTransactionID_init_default, HederaAccountID_init_default, 0, HederaDuration_init_default, 0, "", 0, {HederaCryptoCreateTransactionBody_init_default}}
#define HederaTransactionBody_init_zero          {HederaTransactionID_init_zero, HederaAccountID_init_zero, 0, HederaDuration_init_zero, 0, "", 0, {HederaCryptoCreateTransactionBody_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define HederaTransactionBody_cryptoCreateAccount_tag 11
#define HederaTransactionBody_cryptoTransfer_tag 14
#define HederaTransactionBody_transactionID_tag  1
#define HederaTransactionBody_nodeAccountID_tag  2
#define HederaTransactionBody_transactionFee_tag 3
#define HederaTransactionBody_transactionValidDuration_tag 4
#define HederaTransactionBody_generateRecord_tag 5
#define HederaTransactionBody_memo_tag           6

/* Struct field encoding specification for nanopb */
extern const pb_field_t HederaTransactionBody_fields[9];

/* Maximum encoded size of messages (where known) */
#define HederaTransactionBody_size               443

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TRANSACTIONBODY_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
