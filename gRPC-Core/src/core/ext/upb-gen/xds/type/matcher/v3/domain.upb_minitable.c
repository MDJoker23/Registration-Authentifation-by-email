/* This file was generated by upb_generator from the input file:
 *
 *     xds/type/matcher/v3/domain.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "xds/type/matcher/v3/domain.upb_minitable.h"
#include "xds/annotations/v3/status.upb_minitable.h"
#include "xds/type/matcher/v3/matcher.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub xds_type_matcher_v3_ServerNameMatcher_submsgs[1] = {
  {.submsg = &xds__type__matcher__v3__ServerNameMatcher__DomainMatcher_msg_init},
};

static const upb_MiniTableField xds_type_matcher_v3_ServerNameMatcher__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds__type__matcher__v3__ServerNameMatcher_msg_init = {
  &xds_type_matcher_v3_ServerNameMatcher_submsgs[0],
  &xds_type_matcher_v3_ServerNameMatcher__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_submsgs[1] = {
  {.submsg = &xds__type__matcher__v3__Matcher__OnMatch_msg_init},
};

static const upb_MiniTableField xds_type_matcher_v3_ServerNameMatcher_DomainMatcher__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds__type__matcher__v3__ServerNameMatcher__DomainMatcher_msg_init = {
  &xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_submsgs[0],
  &xds_type_matcher_v3_ServerNameMatcher_DomainMatcher__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_prs_1bt},
    {0x0010000001000012, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[2] = {
  &xds__type__matcher__v3__ServerNameMatcher_msg_init,
  &xds__type__matcher__v3__ServerNameMatcher__DomainMatcher_msg_init,
};

const upb_MiniTableFile xds_type_matcher_v3_domain_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port/undef.inc"

