/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.3 at Tue Oct 22 16:32:22 2019. */

#include "TransactionBody.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t HederaTransactionBody_fields[9] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, HederaTransactionBody, transactionID, transactionID, &HederaTransactionID_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, HederaTransactionBody, nodeAccountID, transactionID, &HederaAccountID_fields),
    PB_FIELD(  3, UINT64  , SINGULAR, STATIC  , OTHER, HederaTransactionBody, transactionFee, nodeAccountID, 0),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, HederaTransactionBody, transactionValidDuration, transactionFee, &HederaDuration_fields),
    PB_FIELD(  5, BOOL    , SINGULAR, STATIC  , OTHER, HederaTransactionBody, generateRecord, transactionValidDuration, 0),
    PB_FIELD(  6, STRING  , SINGULAR, STATIC  , OTHER, HederaTransactionBody, memo, generateRecord, 0),
    PB_ONEOF_FIELD(data,  11, MESSAGE , ONEOF, STATIC  , OTHER, HederaTransactionBody, cryptoCreateAccount, memo, &HederaCryptoCreateTransactionBody_fields),
    PB_ONEOF_FIELD(data,  14, MESSAGE , ONEOF, STATIC  , UNION, HederaTransactionBody, cryptoTransfer, memo, &HederaCryptoTransferTransactionBody_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(HederaTransactionBody, data.cryptoCreateAccount) < 65536 && pb_membersize(HederaTransactionBody, data.cryptoTransfer) < 65536 && pb_membersize(HederaTransactionBody, transactionID) < 65536 && pb_membersize(HederaTransactionBody, nodeAccountID) < 65536 && pb_membersize(HederaTransactionBody, transactionValidDuration) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_HederaTransactionBody)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(HederaTransactionBody, data.cryptoCreateAccount) < 256 && pb_membersize(HederaTransactionBody, data.cryptoTransfer) < 256 && pb_membersize(HederaTransactionBody, transactionID) < 256 && pb_membersize(HederaTransactionBody, nodeAccountID) < 256 && pb_membersize(HederaTransactionBody, transactionValidDuration) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_HederaTransactionBody)
#endif


/* @@protoc_insertion_point(eof) */
