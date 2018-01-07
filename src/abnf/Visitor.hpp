/* -----------------------------------------------------------------------------
 * Visitor.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef visitor_hpp
#define visitor_hpp

namespace abnf {

class Rule_session_description;
class Rule_proto_version;
class Rule_origin_field;
class Rule_session_name_field;
class Rule_information_field;
class Rule_uri_field;
class Rule_email_fields;
class Rule_email_field;
class Rule_phone_fields;
class Rule_phone_field;
class Rule_connection_field;
class Rule_bandwidth_fields;
class Rule_bandwidth_field;
class Rule_time_fields;
class Rule_time_repeat_field;
class Rule_time_field;
class Rule_repeat_field;
class Rule_zone_adjustments;
class Rule_key_field;
class Rule_attribute_fields;
class Rule_attribute_field;
class Rule_gen_attribute;
class Rule_sctpmap_attr;
class Rule_sctpmap_number;
class Rule_app;
class Rule_streams;
class Rule_fingerprint_attribute;
class Rule_hash_func;
class Rule_fingerprint;
class Rule_extmap_attribute;
class Rule_extension_identifier;
class Rule_extension_name;
class Rule_direction;
class Rule_extension_attributes;
class Rule_candidate_attribute;
class Rule_foundation;
class Rule_component_id;
class Rule_transport;
class Rule_transport_extension;
class Rule_priority;
class Rule_cand_type;
class Rule_candidate_types;
class Rule_rel_addr;
class Rule_rel_port;
class Rule_extension_att;
class Rule_extension_att_name;
class Rule_extension_att_value;
class Rule_ice_char;
class Rule_crypto_attribute;
class Rule_tag;
class Rule_crypto_suite;
class Rule_key_params;
class Rule_key_param;
class Rule_key_method;
class Rule_key_method_ext;
class Rule_key_info;
class Rule_key_salt;
class Rule_key_lifetime;
class Rule_key_mki;
class Rule_key_mki_value;
class Rule_key_mki_length;
class Rule_session_param;
class Rule_mid_attr;
class Rule_identification_tag;
class Rule_group_attr;
class Rule_group_semantics;
class Rule_ssrc_attr;
class Rule_ssrc_id;
class Rule_ssrc_group_attr;
class Rule_ssrc_group_semantics;
class Rule_cname_attr;
class Rule_cname;
class Rule_previous_ssrc_attr;
class Rule_rtpmap_attr;
class Rule_name;
class Rule_rate;
class Rule_parameters;
class Rule_fmtp_attr;
class Rule_param_list;
class Rule_media_descriptions;
class Rule_media_description;
class Rule_media_field;
class Rule_username;
class Rule_sess_id;
class Rule_sess_version;
class Rule_nettype;
class Rule_addrtype;
class Rule_email_address;
class Rule_address_and_comment;
class Rule_dispname_and_address;
class Rule_phone_number;
class Rule_phone;
class Rule_connection_address;
class Rule_unicast_address;
class Rule_bwtype;
class Rule_bandwidth;
class Rule_start_time;
class Rule_stop_time;
class Rule_time;
class Rule_repeat_interval;
class Rule_typed_time;
class Rule_fixed_len_time_unit;
class Rule_key_type;
class Rule_prompt_key_type;
class Rule_clear_key_type;
class Rule_base64_key_type;
class Rule_uri_key_type;
class Rule_base64;
class Rule_base64_unit;
class Rule_base64_pad;
class Rule_base64_char;
class Rule_attribute;
class Rule_att_field;
class Rule_att_value;
class Rule_media;
class Rule_fmt;
class Rule_proto;
class Rule_port;
class Rule_number_of_ports;
class Rule_IP4_multicast;
class Rule_m1;
class Rule_IP6_multicast;
class Rule_ttl;
class Rule_FQDN;
class Rule_email_safe;
class Rule_URI;
class Rule_hier_part;
class Rule_URI_reference;
class Rule_absolute_URI;
class Rule_relative_ref;
class Rule_relative_part;
class Rule_scheme;
class Rule_authority;
class Rule_userinfo;
class Rule_host;
class Rule_IP_literal;
class Rule_IPvFuture;
class Rule_IPv6address;
class Rule_h16;
class Rule_ls32;
class Rule_IPv4address;
class Rule_dec_octet;
class Rule_reg_name;
class Rule_path;
class Rule_path_abempty;
class Rule_path_absolute;
class Rule_path_noscheme;
class Rule_path_rootless;
class Rule_path_empty;
class Rule_segment;
class Rule_segment_nz;
class Rule_segment_nz_nc;
class Rule_pchar;
class Rule_query;
class Rule_fragment;
class Rule_pct_encoded;
class Rule_unreserved;
class Rule_reserved;
class Rule_gen_delims;
class Rule_sub_delims;
class Rule_addr_spec;
class Rule_local_part;
class Rule_domain;
class Rule_domain_literal;
class Rule_dcontent;
class Rule_dtext;
class Rule_NO_WS_CTL;
class Rule_quoted_pair;
class Rule_text;
class Rule_FWS;
class Rule_comment;
class Rule_ccontent;
class Rule_ctext;
class Rule_dot_atom;
class Rule_dot_atom_text;
class Rule_atext;
class Rule_integer;
class Rule_alpha_numeric;
class Rule_decimal_uchar;
class Rule_decimal_uchar_1xx;
class Rule_decimal_uchar_2xx;
class Rule_decimal_uchar_25x;
class Rule_BIT;
class Rule_CHAR;
class Rule_CR;
class Rule_CTL;
class Rule_HEXDIG;
class Rule_HTAB;
class Rule_LF;
class Rule_LWSP;
class Rule_OCTET;
class Rule_SP;
class Rule_VCHAR;
class Rule_quoted_string;
class Rule_qcontent;
class Rule_qtext;
class Rule_obs_local_part;
class Rule_obs_domain;
class Rule_obs_FWS;
class Rule_obs_qp;
class Rule_obs_text;
class Rule_obs_char;
class Rule_CFWS;
class Rule_WSP;
class Rule_atom;
class Rule_word;
class Rule_extn_addr;
class Rule_non_ws_string;
class Rule_byte_string;
class Rule_CRLF;
class Rule_token;
class Rule_ALPHA;
class Rule_DIGIT;
class Rule_POS_DIGIT;
class Rule_DQUOTE;
class Rule_EQUALS;
class CRLF;
class Token;
class ALPHA;
class ByteString;
class Terminal_StringValue;
class Terminal_NumericValue;

class Visitor
{
public:
  virtual void* visit(const Rule_session_description* rule) = 0;
  virtual void* visit(const Rule_proto_version* rule) = 0;
  virtual void* visit(const Rule_origin_field* rule) = 0;
  virtual void* visit(const Rule_session_name_field* rule) = 0;
  virtual void* visit(const Rule_information_field* rule) = 0;
  virtual void* visit(const Rule_uri_field* rule) = 0;
  virtual void* visit(const Rule_email_fields* rule) = 0;
  virtual void* visit(const Rule_email_field* rule) = 0;
  virtual void* visit(const Rule_phone_fields* rule) = 0;
  virtual void* visit(const Rule_phone_field* rule) = 0;
  virtual void* visit(const Rule_connection_field* rule) = 0;
  virtual void* visit(const Rule_bandwidth_fields* rule) = 0;
  virtual void* visit(const Rule_bandwidth_field* rule) = 0;
  virtual void* visit(const Rule_time_fields* rule) = 0;
  virtual void* visit(const Rule_time_repeat_field* rule) = 0;
  virtual void* visit(const Rule_time_field* rule) = 0;
  virtual void* visit(const Rule_repeat_field* rule) = 0;
  virtual void* visit(const Rule_zone_adjustments* rule) = 0;
  virtual void* visit(const Rule_key_field* rule) = 0;
  virtual void* visit(const Rule_attribute_fields* rule) = 0;
  virtual void* visit(const Rule_attribute_field* rule) = 0;
  virtual void* visit(const Rule_gen_attribute* rule) = 0;
  virtual void* visit(const Rule_sctpmap_attr* rule) = 0;
  virtual void* visit(const Rule_sctpmap_number* rule) = 0;
  virtual void* visit(const Rule_app* rule) = 0;
  virtual void* visit(const Rule_streams* rule) = 0;
  virtual void* visit(const Rule_fingerprint_attribute* rule) = 0;
  virtual void* visit(const Rule_hash_func* rule) = 0;
  virtual void* visit(const Rule_fingerprint* rule) = 0;
  virtual void* visit(const Rule_extmap_attribute* rule) = 0;
  virtual void* visit(const Rule_extension_identifier* rule) = 0;
  virtual void* visit(const Rule_extension_name* rule) = 0;
  virtual void* visit(const Rule_direction* rule) = 0;
  virtual void* visit(const Rule_extension_attributes* rule) = 0;
  virtual void* visit(const Rule_candidate_attribute* rule) = 0;
  virtual void* visit(const Rule_foundation* rule) = 0;
  virtual void* visit(const Rule_component_id* rule) = 0;
  virtual void* visit(const Rule_transport* rule) = 0;
  virtual void* visit(const Rule_transport_extension* rule) = 0;
  virtual void* visit(const Rule_priority* rule) = 0;
  virtual void* visit(const Rule_cand_type* rule) = 0;
  virtual void* visit(const Rule_candidate_types* rule) = 0;
  virtual void* visit(const Rule_rel_addr* rule) = 0;
  virtual void* visit(const Rule_rel_port* rule) = 0;
  virtual void* visit(const Rule_extension_att* rule) = 0;
  virtual void* visit(const Rule_extension_att_name* rule) = 0;
  virtual void* visit(const Rule_extension_att_value* rule) = 0;
  virtual void* visit(const Rule_ice_char* rule) = 0;
  virtual void* visit(const Rule_crypto_attribute* rule) = 0;
  virtual void* visit(const Rule_tag* rule) = 0;
  virtual void* visit(const Rule_crypto_suite* rule) = 0;
  virtual void* visit(const Rule_key_params* rule) = 0;
  virtual void* visit(const Rule_key_param* rule) = 0;
  virtual void* visit(const Rule_key_method* rule) = 0;
  virtual void* visit(const Rule_key_method_ext* rule) = 0;
  virtual void* visit(const Rule_key_info* rule) = 0;
  virtual void* visit(const Rule_key_salt* rule) = 0;
  virtual void* visit(const Rule_key_lifetime* rule) = 0;
  virtual void* visit(const Rule_key_mki* rule) = 0;
  virtual void* visit(const Rule_key_mki_value* rule) = 0;
  virtual void* visit(const Rule_key_mki_length* rule) = 0;
  virtual void* visit(const Rule_session_param* rule) = 0;
  virtual void* visit(const Rule_mid_attr* rule) = 0;
  virtual void* visit(const Rule_identification_tag* rule) = 0;
  virtual void* visit(const Rule_group_attr* rule) = 0;
  virtual void* visit(const Rule_group_semantics* rule) = 0;
  virtual void* visit(const Rule_ssrc_attr* rule) = 0;
  virtual void* visit(const Rule_ssrc_id* rule) = 0;
  virtual void* visit(const Rule_ssrc_group_attr* rule) = 0;
  virtual void* visit(const Rule_ssrc_group_semantics* rule) = 0;
  virtual void* visit(const Rule_cname_attr* rule) = 0;
  virtual void* visit(const Rule_cname* rule) = 0;
  virtual void* visit(const Rule_previous_ssrc_attr* rule) = 0;
  virtual void* visit(const Rule_rtpmap_attr* rule) = 0;
  virtual void* visit(const Rule_name* rule) = 0;
  virtual void* visit(const Rule_rate* rule) = 0;
  virtual void* visit(const Rule_parameters* rule) = 0;
  virtual void* visit(const Rule_fmtp_attr* rule) = 0;
  virtual void* visit(const Rule_param_list* rule) = 0;
  virtual void* visit(const Rule_media_descriptions* rule) = 0;
  virtual void* visit(const Rule_media_description* rule) = 0;
  virtual void* visit(const Rule_media_field* rule) = 0;
  virtual void* visit(const Rule_username* rule) = 0;
  virtual void* visit(const Rule_sess_id* rule) = 0;
  virtual void* visit(const Rule_sess_version* rule) = 0;
  virtual void* visit(const Rule_nettype* rule) = 0;
  virtual void* visit(const Rule_addrtype* rule) = 0;
  virtual void* visit(const Rule_email_address* rule) = 0;
  virtual void* visit(const Rule_address_and_comment* rule) = 0;
  virtual void* visit(const Rule_dispname_and_address* rule) = 0;
  virtual void* visit(const Rule_phone_number* rule) = 0;
  virtual void* visit(const Rule_phone* rule) = 0;
  virtual void* visit(const Rule_connection_address* rule) = 0;
  virtual void* visit(const Rule_unicast_address* rule) = 0;
  virtual void* visit(const Rule_bwtype* rule) = 0;
  virtual void* visit(const Rule_bandwidth* rule) = 0;
  virtual void* visit(const Rule_start_time* rule) = 0;
  virtual void* visit(const Rule_stop_time* rule) = 0;
  virtual void* visit(const Rule_time* rule) = 0;
  virtual void* visit(const Rule_repeat_interval* rule) = 0;
  virtual void* visit(const Rule_typed_time* rule) = 0;
  virtual void* visit(const Rule_fixed_len_time_unit* rule) = 0;
  virtual void* visit(const Rule_key_type* rule) = 0;
  virtual void* visit(const Rule_prompt_key_type* rule) = 0;
  virtual void* visit(const Rule_clear_key_type* rule) = 0;
  virtual void* visit(const Rule_base64_key_type* rule) = 0;
  virtual void* visit(const Rule_uri_key_type* rule) = 0;
  virtual void* visit(const Rule_base64* rule) = 0;
  virtual void* visit(const Rule_base64_unit* rule) = 0;
  virtual void* visit(const Rule_base64_pad* rule) = 0;
  virtual void* visit(const Rule_base64_char* rule) = 0;
  virtual void* visit(const Rule_attribute* rule) = 0;
  virtual void* visit(const Rule_att_field* rule) = 0;
  virtual void* visit(const Rule_att_value* rule) = 0;
  virtual void* visit(const Rule_media* rule) = 0;
  virtual void* visit(const Rule_fmt* rule) = 0;
  virtual void* visit(const Rule_proto* rule) = 0;
  virtual void* visit(const Rule_port* rule) = 0;
  virtual void* visit(const Rule_number_of_ports* rule) = 0;
  virtual void* visit(const Rule_IP4_multicast* rule) = 0;
  virtual void* visit(const Rule_m1* rule) = 0;
  virtual void* visit(const Rule_IP6_multicast* rule) = 0;
  virtual void* visit(const Rule_ttl* rule) = 0;
  virtual void* visit(const Rule_FQDN* rule) = 0;
  virtual void* visit(const Rule_email_safe* rule) = 0;
  virtual void* visit(const Rule_URI* rule) = 0;
  virtual void* visit(const Rule_hier_part* rule) = 0;
  virtual void* visit(const Rule_URI_reference* rule) = 0;
  virtual void* visit(const Rule_absolute_URI* rule) = 0;
  virtual void* visit(const Rule_relative_ref* rule) = 0;
  virtual void* visit(const Rule_relative_part* rule) = 0;
  virtual void* visit(const Rule_scheme* rule) = 0;
  virtual void* visit(const Rule_authority* rule) = 0;
  virtual void* visit(const Rule_userinfo* rule) = 0;
  virtual void* visit(const Rule_host* rule) = 0;
  virtual void* visit(const Rule_IP_literal* rule) = 0;
  virtual void* visit(const Rule_IPvFuture* rule) = 0;
  virtual void* visit(const Rule_IPv6address* rule) = 0;
  virtual void* visit(const Rule_h16* rule) = 0;
  virtual void* visit(const Rule_ls32* rule) = 0;
  virtual void* visit(const Rule_IPv4address* rule) = 0;
  virtual void* visit(const Rule_dec_octet* rule) = 0;
  virtual void* visit(const Rule_reg_name* rule) = 0;
  virtual void* visit(const Rule_path* rule) = 0;
  virtual void* visit(const Rule_path_abempty* rule) = 0;
  virtual void* visit(const Rule_path_absolute* rule) = 0;
  virtual void* visit(const Rule_path_noscheme* rule) = 0;
  virtual void* visit(const Rule_path_rootless* rule) = 0;
  virtual void* visit(const Rule_path_empty* rule) = 0;
  virtual void* visit(const Rule_segment* rule) = 0;
  virtual void* visit(const Rule_segment_nz* rule) = 0;
  virtual void* visit(const Rule_segment_nz_nc* rule) = 0;
  virtual void* visit(const Rule_pchar* rule) = 0;
  virtual void* visit(const Rule_query* rule) = 0;
  virtual void* visit(const Rule_fragment* rule) = 0;
  virtual void* visit(const Rule_pct_encoded* rule) = 0;
  virtual void* visit(const Rule_unreserved* rule) = 0;
  virtual void* visit(const Rule_reserved* rule) = 0;
  virtual void* visit(const Rule_gen_delims* rule) = 0;
  virtual void* visit(const Rule_sub_delims* rule) = 0;
  virtual void* visit(const Rule_addr_spec* rule) = 0;
  virtual void* visit(const Rule_local_part* rule) = 0;
  virtual void* visit(const Rule_domain* rule) = 0;
  virtual void* visit(const Rule_domain_literal* rule) = 0;
  virtual void* visit(const Rule_dcontent* rule) = 0;
  virtual void* visit(const Rule_dtext* rule) = 0;
  virtual void* visit(const Rule_NO_WS_CTL* rule) = 0;
  virtual void* visit(const Rule_quoted_pair* rule) = 0;
  virtual void* visit(const Rule_text* rule) = 0;
  virtual void* visit(const Rule_FWS* rule) = 0;
  virtual void* visit(const Rule_comment* rule) = 0;
  virtual void* visit(const Rule_ccontent* rule) = 0;
  virtual void* visit(const Rule_ctext* rule) = 0;
  virtual void* visit(const Rule_dot_atom* rule) = 0;
  virtual void* visit(const Rule_dot_atom_text* rule) = 0;
  virtual void* visit(const Rule_atext* rule) = 0;
  virtual void* visit(const Rule_integer* rule) = 0;
  virtual void* visit(const Rule_alpha_numeric* rule) = 0;
  virtual void* visit(const Rule_decimal_uchar* rule) = 0;
  virtual void* visit(const Rule_decimal_uchar_1xx* rule) = 0;
  virtual void* visit(const Rule_decimal_uchar_2xx* rule) = 0;
  virtual void* visit(const Rule_decimal_uchar_25x* rule) = 0;
  virtual void* visit(const Rule_BIT* rule) = 0;
  virtual void* visit(const Rule_CHAR* rule) = 0;
  virtual void* visit(const Rule_CR* rule) = 0;
  virtual void* visit(const Rule_CTL* rule) = 0;
  virtual void* visit(const Rule_HEXDIG* rule) = 0;
  virtual void* visit(const Rule_HTAB* rule) = 0;
  virtual void* visit(const Rule_LF* rule) = 0;
  virtual void* visit(const Rule_LWSP* rule) = 0;
  virtual void* visit(const Rule_OCTET* rule) = 0;
  virtual void* visit(const Rule_SP* rule) = 0;
  virtual void* visit(const Rule_VCHAR* rule) = 0;
  virtual void* visit(const Rule_quoted_string* rule) = 0;
  virtual void* visit(const Rule_qcontent* rule) = 0;
  virtual void* visit(const Rule_qtext* rule) = 0;
  virtual void* visit(const Rule_obs_local_part* rule) = 0;
  virtual void* visit(const Rule_obs_domain* rule) = 0;
  virtual void* visit(const Rule_obs_FWS* rule) = 0;
  virtual void* visit(const Rule_obs_qp* rule) = 0;
  virtual void* visit(const Rule_obs_text* rule) = 0;
  virtual void* visit(const Rule_obs_char* rule) = 0;
  virtual void* visit(const Rule_CFWS* rule) = 0;
  virtual void* visit(const Rule_WSP* rule) = 0;
  virtual void* visit(const Rule_atom* rule) = 0;
  virtual void* visit(const Rule_word* rule) = 0;
  virtual void* visit(const Rule_extn_addr* rule) = 0;
  virtual void* visit(const Rule_non_ws_string* rule) = 0;
  virtual void* visit(const Rule_byte_string* rule) = 0;
  virtual void* visit(const Rule_CRLF* rule) = 0;
  virtual void* visit(const Rule_token* rule) = 0;
  virtual void* visit(const Rule_ALPHA* rule) = 0;
  virtual void* visit(const Rule_DIGIT* rule) = 0;
  virtual void* visit(const Rule_POS_DIGIT* rule) = 0;
  virtual void* visit(const Rule_DQUOTE* rule) = 0;
  virtual void* visit(const Rule_EQUALS* rule) = 0;
  virtual void* visit(const Terminal_StringValue* value) = 0;
  virtual void* visit(const Terminal_NumericValue* value) = 0;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
