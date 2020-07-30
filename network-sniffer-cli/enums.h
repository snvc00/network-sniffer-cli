#pragma once

const HANDLE STDOUT_HANDLE = GetStdHandle(STD_OUTPUT_HANDLE);

const enum {
	BACKBLACK_FOREAQUA   = 3,
	BACKBLACK_FOREPURPLE = 5,
	BACKBLACK_FOREYELLOW = 6,
	BACKBLACK_FOREWHITE  = 7,
	BACKBLACK_FORELIME   = 10,
	BACKBLACK_FORECYAN   = 11,
	BACKBLACK_FORERED    = 12,
	BACKRED_FOREWHITE    = 79,
	BACKWHITE_FOREBLACK  = 240
};

const enum HMI_OPTIONS {
	OPEN_LOCAL   = 0,
	OPEN_ADAPTER = 1,
	ABOUT_APP    = 2,
	CLOSE_APP    = 3
};

const enum EVENT_KEYS {
	ENTER      = 13,
	ARROW_UP   = 72,
	ARROW_DOWN = 80
};

const enum PROTOCOL_SIZE_IN_BYTES
{
	SIZE_ETHERNET = 14,
	SIZE_IPV4     = 20,
	SIZE_IPV6     = 36,
	SIZE_ARP_RARP = 28,
	SIZE_TCP      = 20,
	SIZE_UDP      = 8
};

constexpr unsigned int PCAP_OPC_CONTINUE = 2U;
constexpr unsigned int PCAP_OPC_RETRY    = 1U;

enum PACKET_TYPES
{
	TYPE_IPV4 = 8,
	TYPE_IPV6 = 355,
	TYPE_ARP  = 14,
	TYPE_RARP = 181
};
constexpr unsigned int MAC_AND_TYPE_BYTES       = 14U;
constexpr unsigned int DESTINATION_ADRESS_LIMIT = 6U;
constexpr unsigned int SOURCE_ADRESS_LIMIT      = 12U;
constexpr unsigned int TYPE_BYTE_1              = 12U;
constexpr unsigned int TYPE_BYTE_2              = 13U;

constexpr unsigned int IPV4 = 4U;
constexpr unsigned int IPV6 = 6U;

enum  IPV4_SEGMENTATION {
	IPV4_VERSION_BEGIN                  = 0U,
	IPV4_VERSION_END                    = 4U,
	IPV4_HEADER_LENGTH_BEGIN            = 4U,
	IPV4_HEADER_LENGTH_END              = 8U,
	IPV4_TOS_PRECEDENCE_BEGIN           = 8U,
	IPV4_TOS_PRECEDENCE_END             = 11U,
	IPV4_TOS_DELAY_BEGIN                = 11U,
	IPV4_TOS_DELAY_END                  = 12U,
	IPV4_TOS_THROUGHPUT_BEGIN           = 12U,
	IPV4_TOS_THROUGHPUT_END             = 13U,
	IPV4_TOS_RELIABILITY_BEGIN          = 13U,
	IPV4_TOS_RELIABILITY_END            = 14U,
	IPV4_TOS_MONETARY_COST_BEGIN        = 14U,
	IPV4_TOS_MONETARY_COST_END          = 15U,
	IPV4_TOTAL_LENGTH_BEGIN             = 16U,
	IPV4_TOTAL_LENGTH_END               = 32U,
	IPV4_IDENTIFIER_BEGIN               = 32U,
	IPV4_IDENTIFIER_END                 = 48U,
	IPV4_FLAG_0_BEGIN                   = 49U,
	IPV4_FLAG_0_END                     = 50U,
	IPV4_FLAG_1_BEGIN                   = 50U,
	IPV4_FLAG_1_END                     = 51U,
	IPV4_FRAGMENT_OFFSET_BEGIN          = 51U,
	IPV4_FRAGMENT_OFFSET_END            = 64U,
	IPV4_TIME_TO_LIVE_BEGIN             = 64U,
	IPV4_TIME_TO_LIVE_END               = 72U,
	IPV4_PROTOCOL_BEGIN                 = 72U,
	IPV4_PROTOCOL_END                   = 80U,
	IPV4_CHECKSUM_BYTE_1                = 25U,
	IPV4_CHECKSUM_BYTE_2                = 26U,
	IPV4_SOURCE_ADDRESS_POS0_BEGIN      = 96U,
	IPV4_SOURCE_ADDRESS_POS1_BEGIN      = 104U,
	IPV4_SOURCE_ADDRESS_POS2_BEGIN      = 112U,
	IPV4_SOURCE_ADDRESS_POS3_BEGIN      = 120U,
	IPV4_SOURCE_ADDRESS_POS0_END        = 104U,
	IPV4_SOURCE_ADDRESS_POS1_END        = 112U,
	IPV4_SOURCE_ADDRESS_POS2_END        = 120U,
	IPV4_SOURCE_ADDRESS_POS3_END        = 128U,
	IPV4_DESTINATION_ADDRESS_POS0_BEGIN = 128U,
	IPV4_DESTINATION_ADDRESS_POS1_BEGIN = 136U,
	IPV4_DESTINATION_ADDRESS_POS2_BEGIN = 144U,
	IPV4_DESTINATION_ADDRESS_POS3_BEGIN = 152U,
	IPV4_DESTINATION_ADDRESS_POS0_END   = 136U,
	IPV4_DESTINATION_ADDRESS_POS1_END   = 144U,
	IPV4_DESTINATION_ADDRESS_POS2_END   = 152U,
	IPV4_DESTINATION_ADDRESS_POS3_END   = 160U
};

enum IPV4_VARIABLE_ARRAY_SIZES {
	IPV4_FLAGS_BYTES           = 2,
	IPV4_ADDRESS_BYTES         = 4,
	IPV4_TYPE_OF_SERVICE_BYTES = 5
};

enum IPV4_TYPE_OF_SERVICE_OPTIONS
{
	IPV4_TOS_PRECEDENCE_ROUTINE              = 0,
	IPV4_TOS_PRECEDENCE_PRIORITY             = 1,
	IPV4_TOS_PRECEDENCE_INMEDIATE            = 2,
	IPV4_TOS_PRECEDENCE_FLASH                = 3,
	IPV4_TOS_PRECEDENCE_FLASH_OVERRIDE       = 4,
	IPV4_TOS_PRECEDENCE_CRITIC               = 5,
	IPV4_TOS_PRECEDENCE_INTERNETWORK_CONTROL = 6,
	IPV4_TOS_PRECEDENCE_NETWORK_CONTROL      = 7,
	IPV4_TOS_DELAY_NORMAL                    = 0,
	IPV4_TOS_DELAY_MINIMIZE                  = 1,
	IPV4_TOS_THROUGHPUT_NORMAL               = 0,
	IPV4_TOS_THROUGHPUT_MAXIMIZE             = 1,
	IPV4_TOS_RELIABILITY_NORMAL              = 0,
	IPV4_TOS_RELIABILITY_MAXIMIZE            = 1,
	IPV4_TOS_MONETARYCOST_NORMAL             = 0,
	IPV4_TOS_MONETARYCOST_MINIMIZE           = 1
};

enum IPV4_TYPE_OF_SERVICE_ARRAY_VALUES {
	IPV4_TOS_PRECEDENCE	   = 0,
	IPV4_TOS_DELAY		   = 1,
	IPV4_TOS_THROUGHPUT    = 2,
	IPV4_TOS_RELIABILITY   = 3,
	IPV4_TOS_MONETARY_COST = 4
};

enum IPV4_FLAGS_ARRAY_VALUES {
	IPV4_FLAG_IS_DIVIDED_BYTE    = 0,
	IPV4_FLAG_LAST_FRAGMENT_BYTE = 1
};

enum IPV4_PROTOCOL_OPTIONS
{
	IPV4_PROTOCOL_ICMP = 1,
	IPV4_PROTOCOL_TCP  = 6,
	IPV4_PROTOCOL_UDP  = 17,
	IPV4_PROTOCOL_STP  = 118,
	IPV4_PROTOCOL_SMP  = 121
};

enum IPV4_FLAG_OPTIONS
{
	IPV4_FLAG_DIVIDED           = 0,
	IPV4_FLAG_NOT_DIVIDED       = 1,
	IPV4_FLAG_LAST_FRAGMENT     = 0,
	IPV4_FLAG_NOT_LAST_FRAGMENT = 1
};

enum ICMPV4_TYPES
{
	ICMPV4_TYPE_ECHO_REPLY               = 0,
	ICMPV4_TYPE_DESTINATION_UNREACHEABLE = 3,
	ICMPV4_TYPE_SOURCE_QUENCH            = 4,
	ICMPV4_TYPE_REDIRECT                 = 5,
	ICMPV4_TYPE_ECHO                     = 8,
	ICMPV4_TYPE_TIME_EXCEEDED            = 11,
	ICMPV4_TYPE_PARAMETER_PROBLEM        = 12,
	ICMPV4_TYPE_TIMESTAMP                = 13,
	ICMPV4_TYPE_TIMESTAMP_REPLY          = 14,
	ICMPV4_TYPE_INFORMATION_REQUEST      = 15,
	ICMPV4_TYPE_INFORMATION_REPLY        = 16,
	ICMPV4_TYPE_ADDRESSMARK              = 17,
	ICMPV4_TYPE_ADDRESSMARK_REPLY        = 18
};

enum ICMPV4_CODES
{
	ICMPV4_CODE_0  = 0,
	ICMPV4_CODE_1  = 1,
	ICMPV4_CODE_2  = 2,
	ICMPV4_CODE_3  = 3,
	ICMPV4_CODE_4  = 4,
	ICMPV4_CODE_5  = 5,
	ICMPV4_CODE_6  = 6,
	ICMPV4_CODE_7  = 7,
	ICMPV4_CODE_8  = 8,
	ICMPV4_CODE_9  = 9,
	ICMPV4_CODE_10 = 10,
	ICMPV4_CODE_11 = 11,
	ICMPV4_CODE_12 = 12
};

enum ICMPV4_FRAME_SEGMENTATION {
	ICMPV4_CHECKSUM_BYTE1 = 22,
	ICMPV4_CHECKSUM_BYTE2 = 23,
	ICMPV4_TYPE_BEGIN	  = 160,
	ICMPV4_TYPE_END		  = 168,
	ICMPV4_CODE_BEGIN	  = 168,
	ICMPV4_CODE_END		  = 176
};

enum ARP_FRAME_SEGMENTATION
{
	ARP_HARDWARE_TYPE_BEGIN                  = 0,
	ARP_HARDWARE_TYPE_END                    = 16,
	ARP_PROTOCOL_TYPE_BYTE_1                 = 16,
	ARP_PROTOCOL_TYPE_BYTE_2                 = 17,
	ARP_HARDWARE_ADDRESS_LENGTH_BEGIN        = 32,
	ARP_HARDWARE_ADDRESS_LENGTH_END          = 40,
	ARP_PROTOCOL_ADDRESS_LENGTH_BEGIN        = 40,
	ARP_PROTOCOL_ADDRESS_LENGTH_END          = 48,
	ARP_OPTIONAL_CODE_BEGIN                  = 48,
	ARP_OPTIONAL_CODE_END                    = 64,
	ARP_SENDER_HARDWARE_ADDRESS_BEGIN        = 22,
	ARP_SENDER_HARDWARE_ADDRESS_END          = 28,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD1_BEGIN = 112,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD1_END   = 120,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD2_BEGIN = 120,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD2_END   = 128,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD3_BEGIN = 128,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD3_END   = 136,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD4_BEGIN = 136,
	ARP_SENDER_PROTOCOL_ADDRESS_FIELD4_END   = 144,
	ARP_TARGET_HARDWARE_ADDRESS_BEGIN        = 32,
	ARP_TARGET_HARDWARE_ADDRESS_END          = 38,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD1_BEGIN = 192,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD1_END   = 200,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD2_BEGIN = 200,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD2_END   = 208,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD3_BEGIN = 208,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD3_END   = 216,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD4_BEGIN = 216,
	ARP_TARGET_PROTOCOL_ADDRESS_FIELD4_END   = 224
};

enum ARP_TYPE_OF_HARDWARE_OPTIONS
{
	ARP_TOH_RESERVED         = 0,
	ARP_TOH_ETHERNET_10MB    = 1,
	ARP_TOH_IEEE_802NETWORKS = 6,
	ARP_TOH_ARCNET           = 7,
	ARP_TOH_FRAME_RELAY      = 15,
	ARP_TOH_ATM              = 16,
	ARP_TOH_HDLC             = 17,
	ARP_TOH_FIBRE_CHANNEL    = 18,
	ARP_TOH_SERIAL_LINE      = 20
};


enum ARP_OPCIONAL_CODE_OPTIONS
{
	ARP_OPCODE_ARP_REQUEST   = 1,
	ARP_OPCODE_ARP_REPLY     = 2,
	ARP_OPCODE_RARP_REQUEST  = 3,
	ARP_OPCODE_RARP_REPLY    = 4,
	ARP_OPCODE_DRARP_REQUEST = 5,
	ARP_OPCODE_DRARP_REPLY   = 6,
	ARP_OPCODE_DRARP_ERROR   = 7,
	ARP_OPCODE_INARP_REQUEST = 8,
	ARP_OPCODE_INARP_REPLY   = 9
};

const unsigned int IPV6_VERSION_ID = 6U;

enum IPV6_FRAME_SEGMENTATION {
	// Bit segmentation
	IPV6_VERSION_BEGIN             = 0,
	IPV6_VERSION_END               = 4,
	IPV6_TRAFFIC_CLASS_BEGIN       = 4,
	IPV6_TRAFFIC_CLASS_END         = 12,
	IPV6_FLOW_LABBEL_BEGIN         = 12,
	IPV6_FLOW_LABBEL_END           = 32,
	IPV6_PAYLOAD_LENGTH_BEGIN      = 32,
	IPV6_PAYLOAD_LENGTH_END        = 48,
	IPV6_NEXT_HEADER_BEGIN         = 48,
	IPV6_NEXT_HEADER_END           = 56,
	IPV6_HOP_LIMIT_BEGIN           = 56,
	IPV6_HOP_LIMIT_END             = 64,
	// Byte segmentation
	IPV6_SOURCE_ADDRESS_BEGIN      = 8,
	IPV6_SOURCE_ADDRESS_END        = 24,
	IPV6_DESTINATION_ADDRESS_BEGIN = 24,
	IPV6_DESTINATION_ADDRESS_END   = 40
};

enum IPV6_NEXT_HEADER_OPTIONS
{
	IPV6_NEXT_HEADER_TCP    = 6,
	IPV6_NEXT_HEADER_UDP    = 17,
	IPV6_NEXT_HEADER_ICMPV6 = 58
};

enum ICMPV6_FRAME_SEGMENTATION {
	// Bit segmentation
	ICMPV6_TYPE_BEGIN     = 320,
	ICMPV6_TYPE_END       = 328,
	ICMPV6_CODE_BEGIN     = 328,
	ICMPV6_CODE_END       = 336,
	// Byte segmentation
	ICMPV6_CHECKSUM_BYTE1 = 46,
	ICMPV6_CHECKSUM_BYTE2 = 47
};

enum ICMPV6_TYPE_OPTIONS
{
	ICMPV6_TYPE_RESERVED                = 0,
	ICMPV6_TYPE_DESTINATION_UNREACHABLE = 1,
	ICMPV6_TYPE_PACKET_TOO_BIG          = 2,
	ICMPV6_TYPE_TIME_EXCEEDED           = 3,
	ICMPV6_TYPE_PARAMETER_PROBLEM       = 4,
	ICMPV6_TYPE_ECHO_REQUEST            = 128,
	ICMPV6_TYPE_ECHO_REPLY              = 129,
	ICMPV6_TYPE_ROUTER_SOLICITATION     = 133,
	ICMPV6_TYPE_ADVERTISEMENT           = 134,
	ICMPV6_TYPE_NEIGHBOR_SOLICITATION   = 135,
	ICMPV6_TYPE_NEIGHBOR_ADVERTISEMENT  = 136,
	ICMPV6_TYPE_REDIRECT_MESSAGE        = 137

};

enum ICMPV6_OPTION
{
	ICMPV6_OPTION_DESTINATION_UNREACHABLE_0 = 0,
	ICMPV6_OPTION_DESTINATION_UNREACHABLE_1 = 1,
	ICMPV6_OPTION_DESTINATION_UNREACHABLE_2 = 2,
	ICMPV6_OPTION_DESTINATION_UNREACHABLE_3 = 3,
	ICMPV6_OPTION_TIME_EXCEEDED_0           = 0,
	ICMPV6_OPTION_TIME_EXCEEDED_1           = 1,
	ICMPV6_OPTION_PARAMETER_PROBLEM_0       = 0,
	ICMPV6_OPTION_PARAMETER_PROBLEM_1       = 1,
	ICMPV6_OPTION_PARAMETER_PROBLEM_2       = 2
};

enum PROTOCOL_INIT
{
	FROM_IPV4 = 160,
	FROM_IPV6 = 320,
	FROM_ARP  = 336
};

enum TCP_PREVIOUS_PROTOCOL
{
	PREVIOUS_IPV4 = 0,
	PREVIOUS_IPV6 = 1,
	PREVIOUS_ARP  = 2,

};

enum TCP_FRAME_SEGMENTATION {
	// Bit segmentation
	TCP_SOURCE_PORT_SIZE       = 16,
	TCP_DESTINATION_PORT_BEGIN = 16,
	TCP_DESTINATION_PORT_END   = 32,
	TCP_SEQUENCE_NUMBER_BEGIN  = 32,
	TCP_SEQUENCE_NUMBER_END    = 64,
	TCP_ACKNOWLEDGEMENT_BEGIN  = 64,
	TCP_ACKNOWLEDGEMENT_END    = 96,
	TCP_DATA_POSITION_BEGIN    = 96,
	TCP_DATA_POSITION_END      = 100,
	TCP_ACTIVE_FLAGS_BEGIN     = 103,
	TCP_WINDOW_SIZE_BEGIN      = 112,
	TCP_WINDOW_SIZE_END        = 128,
	TCP_CHECKSUM_BEGIN         = 128,
	TCP_URGENT_POINTER_BEGIN   = 144,
	TCP_URGENT_POINTER_END     = 160,
	TCP_START_DNS_OFFSET       = 160
};

enum TCP_FLAGS_OPTIONS {
	TCP_FLAG_NS   = 0,
	TCP_FLAG_CWR  = 1,
	TCP_FLAG_ECE  = 2,
	TCP_FLAG_URG  = 3,
	TCP_FLAG_ACK  = 4,
	TCP_FLAG_PSH  = 5,
	TCP_FLAG_RST  = 6,
	TCP_FLAG_SYN  = 7,
	TCP_FLAG_FIN  = 8,
	TCP_FLAG_SIZE = 9,
};

enum TCP_PORTS
{			      
	SFTP_PTCP     = 20,
	SFTP_PUDP     = 21,
	SSSH_PTCP     = 22,
	STELNET_PTCP  = 23,
	SSSMTP_PTCP   = 25,
	SDNS_PTCP_UDP = 53,
	SDHCP_UDP     = 67,
	SDHCP_UDP_1   = 68,
	STFTP_PUDP    = 69,
	SHTTP_PTCP    = 80,
	SPOP3_PTCP    = 110,
	SIMAP_PTCP    = 143,
	SHTTPS_PTCP   = 443,
	SIMAPSSL_PTCP = 993,
	SPOPSSL_PTCP  = 995
};

enum UDP_FRAME_SEGMENTATION {
	// Bit segmentation
	UDP_SOURCE_PORT_SIZE       = 16,
	UDP_DESTINATION_PORT_BEGIN = 16,
	UDP_DESTINATION_PORT_END   = 32,
	UDP_LENGTH_BEGIN           = 32,
	UDP_CHECKSUM_BEGIN         = 48,
	UDP_START_DNS_OFFSET       = 64
};

enum DNS_TYPE_OPTIONS
{
	DNS_TYPE_A     = 1,
	DNS_TYPE_CNAME = 5,
	DNS_TYPE_HINFO = 13,
	DNS_TYPE_MX    = 15,
	DNS_TYPE_NS    = 22
};

enum DNS_FRAME_SEGMENTATION {
	// Bit segmentation
	DNS_QR_BEGIN          = 16,
	DNS_QR_END            = 17,
	DNS_OP_CODE_BEGIN     = 17,
	DNS_OP_CODE_END       = 21,
	DNS_AA_BEGIN          = 21,
	DNS_AA_END            = 22,
	DNS_TC_BEGIN          = 22,
	DNS_TC_END            = 23,
	DNS_RD_BEGIN          = 23,
	DNS_RD_END            = 24,
	DNS_RA_BEGIN          = 24,
	DNS_RA_END            = 25,
	DNS_RETURN_CODE_BEGIN = 28,
	DNS_RETURN_CODE_END   = 32,
	DNS_QD_BEGIN          = 32,
	DNS_QD_END            = 48,
	DNS_AN_BEGIN          = 48,
	DNS_AN_END            = 64,
	DNS_NS_BEGIN          = 64,
	DNS_NS_END            = 80,
	DNS_AR_BEGIN          = 80,
	DNS_AR_END            = 96,
	DNS_QUESTION_ANSWER   = 96
};

enum DNS_OP_CODES {
	DNS_OP_CODE_STANDARD = 0,
	DNS_OP_CODE_INVERSE  = 1,
	DNS_OP_CODE_STATUS   = 2
};

enum DNS_RETURN_CODE_OPTIONS {
	DNS_RETURN_CODE_NO_ERROR        = 0,
	DNS_RETURN_CODE_FORMAT_ERROR    = 1,
	DNS_RETURN_CODE_SERVER_ERROR    = 2,
	DNS_RETURN_CODE_NAME_ERROR      = 3,
	DNS_RETURN_CODE_NOT_IMPLEMENTED = 4,
	DNS_RETURN_CODE_REJECTED        = 5
};

enum PORT_CATEGORY_LIMITS {
	WELL_KNOWN_PORT_SUPERIOR_LIMIT = 1024,
	REGISTERED_PORT_INFERIOR_LIMIT = 1023,
	REGISTERED_PORT_SUPERIOR_LIMIT = 49152
};

enum DNS_ANSWER_FIELDS {
	// Bits
	DNS_LETTER_FIELD_SIZE = 8,
	DNS_TYPE_FIELD_SIZE   = 16,
	DNS_CLASS_FIELD_SIZE  = 16
};

const unsigned int DNS_CLASS_INTERNET_PROTOCOLS = 1U;
const unsigned int DNS_CLASS_CHAOTIC_SYSTEM     = 3U;
const unsigned int DNS_TIME_TO_LIVE_BYTE1       = 0U;
const unsigned int DNS_TIME_TO_LIVE_BYTE2       = 1U;