#include "libhole.h"
#include "libchat.h"

const uint64_t des_SPtrans[8][64]={
{
    /* nibble 0 */
    0x00820200L, 0x00020000L, 0x80800000L, 0x80820200L,
    0x00800000L, 0x80020200L, 0x80020000L, 0x80800000L,
    0x80020200L, 0x00820200L, 0x00820000L, 0x80000200L,
    0x80800200L, 0x00800000L, 0x00000000L, 0x80020000L,
    0x00020000L, 0x80000000L, 0x00800200L, 0x00020200L,
    0x80820200L, 0x00820000L, 0x80000200L, 0x00800200L,
    0x80000000L, 0x00000200L, 0x00020200L, 0x80820000L,
    0x00000200L, 0x80800200L, 0x80820000L, 0x00000000L,
    0x00000000L, 0x80820200L, 0x00800200L, 0x80020000L,
    0x00820200L, 0x00020000L, 0x80000200L, 0x00800200L,
    0x80820000L, 0x00000200L, 0x00020200L, 0x80800000L,
    0x80020200L, 0x80000000L, 0x80800000L, 0x00820000L,
    0x80820200L, 0x00020200L, 0x00820000L, 0x80800200L,
    0x00800000L, 0x80000200L, 0x80020000L, 0x00000000L,
    0x00020000L, 0x00800000L, 0x80800200L, 0x00820200L,
    0x80000000L, 0x80820000L, 0x00000200L, 0x80020200L,
    },{
    /* nibble 1 */
    0x10042004L, 0x00000000L, 0x00042000L, 0x10040000L,
    0x10000004L, 0x00002004L, 0x10002000L, 0x00042000L,
    0x00002000L, 0x10040004L, 0x00000004L, 0x10002000L,
    0x00040004L, 0x10042000L, 0x10040000L, 0x00000004L,
    0x00040000L, 0x10002004L, 0x10040004L, 0x00002000L,
    0x00042004L, 0x10000000L, 0x00000000L, 0x00040004L,
    0x10002004L, 0x00042004L, 0x10042000L, 0x10000004L,
    0x10000000L, 0x00040000L, 0x00002004L, 0x10042004L,
    0x00040004L, 0x10042000L, 0x10002000L, 0x00042004L,
    0x10042004L, 0x00040004L, 0x10000004L, 0x00000000L,
    0x10000000L, 0x00002004L, 0x00040000L, 0x10040004L,
    0x00002000L, 0x10000000L, 0x00042004L, 0x10002004L,
    0x10042000L, 0x00002000L, 0x00000000L, 0x10000004L,
    0x00000004L, 0x10042004L, 0x00042000L, 0x10040000L,
    0x10040004L, 0x00040000L, 0x00002004L, 0x10002000L,
    0x10002004L, 0x00000004L, 0x10040000L, 0x00042000L,
    },{
    /* nibble 2 */
    0x41000000L, 0x01010040L, 0x00000040L, 0x41000040L,
    0x40010000L, 0x01000000L, 0x41000040L, 0x00010040L,
    0x01000040L, 0x00010000L, 0x01010000L, 0x40000000L,
    0x41010040L, 0x40000040L, 0x40000000L, 0x41010000L,
    0x00000000L, 0x40010000L, 0x01010040L, 0x00000040L,
    0x40000040L, 0x41010040L, 0x00010000L, 0x41000000L,
    0x41010000L, 0x01000040L, 0x40010040L, 0x01010000L,
    0x00010040L, 0x00000000L, 0x01000000L, 0x40010040L,
    0x01010040L, 0x00000040L, 0x40000000L, 0x00010000L,
    0x40000040L, 0x40010000L, 0x01010000L, 0x41000040L,
    0x00000000L, 0x01010040L, 0x00010040L, 0x41010000L,
    0x40010000L, 0x01000000L, 0x41010040L, 0x40000000L,
    0x40010040L, 0x41000000L, 0x01000000L, 0x41010040L,
    0x00010000L, 0x01000040L, 0x41000040L, 0x00010040L,
    0x01000040L, 0x00000000L, 0x41010000L, 0x40000040L,
    0x41000000L, 0x40010040L, 0x00000040L, 0x01010000L,
    },{
    /* nibble 3 */
    0x00100402L, 0x04000400L, 0x00000002L, 0x04100402L,
    0x00000000L, 0x04100000L, 0x04000402L, 0x00100002L,
    0x04100400L, 0x04000002L, 0x04000000L, 0x00000402L,
    0x04000002L, 0x00100402L, 0x00100000L, 0x04000000L,
    0x04100002L, 0x00100400L, 0x00000400L, 0x00000002L,
    0x00100400L, 0x04000402L, 0x04100000L, 0x00000400L,
    0x00000402L, 0x00000000L, 0x00100002L, 0x04100400L,
    0x04000400L, 0x04100002L, 0x04100402L, 0x00100000L,
    0x04100002L, 0x00000402L, 0x00100000L, 0x04000002L,
    0x00100400L, 0x04000400L, 0x00000002L, 0x04100000L,
    0x04000402L, 0x00000000L, 0x00000400L, 0x00100002L,
    0x00000000L, 0x04100002L, 0x04100400L, 0x00000400L,
    0x04000000L, 0x04100402L, 0x00100402L, 0x00100000L,
    0x04100402L, 0x00000002L, 0x04000400L, 0x00100402L,
    0x00100002L, 0x00100400L, 0x04100000L, 0x04000402L,
    0x00000402L, 0x04000000L, 0x04000002L, 0x04100400L,
    },{
    /* nibble 4 */
    0x02000000L, 0x00004000L, 0x00000100L, 0x02004108L,
    0x02004008L, 0x02000100L, 0x00004108L, 0x02004000L,
    0x00004000L, 0x00000008L, 0x02000008L, 0x00004100L,
    0x02000108L, 0x02004008L, 0x02004100L, 0x00000000L,
    0x00004100L, 0x02000000L, 0x00004008L, 0x00000108L,
    0x02000100L, 0x00004108L, 0x00000000L, 0x02000008L,
    0x00000008L, 0x02000108L, 0x02004108L, 0x00004008L,
    0x02004000L, 0x00000100L, 0x00000108L, 0x02004100L,
    0x02004100L, 0x02000108L, 0x00004008L, 0x02004000L,
    0x00004000L, 0x00000008L, 0x02000008L, 0x02000100L,
    0x02000000L, 0x00004100L, 0x02004108L, 0x00000000L,
    0x00004108L, 0x02000000L, 0x00000100L, 0x00004008L,
    0x02000108L, 0x00000100L, 0x00000000L, 0x02004108L,
    0x02004008L, 0x02004100L, 0x00000108L, 0x00004000L,
    0x00004100L, 0x02004008L, 0x02000100L, 0x00000108L,
    0x00000008L, 0x00004108L, 0x02004000L, 0x02000008L,
    },{
    /* nibble 5 */
    0x20000010L, 0x00080010L, 0x00000000L, 0x20080800L,
    0x00080010L, 0x00000800L, 0x20000810L, 0x00080000L,
    0x00000810L, 0x20080810L, 0x00080800L, 0x20000000L,
    0x20000800L, 0x20000010L, 0x20080000L, 0x00080810L,
    0x00080000L, 0x20000810L, 0x20080010L, 0x00000000L,
    0x00000800L, 0x00000010L, 0x20080800L, 0x20080010L,
    0x20080810L, 0x20080000L, 0x20000000L, 0x00000810L,
    0x00000010L, 0x00080800L, 0x00080810L, 0x20000800L,
    0x00000810L, 0x20000000L, 0x20000800L, 0x00080810L,
    0x20080800L, 0x00080010L, 0x00000000L, 0x20000800L,
    0x20000000L, 0x00000800L, 0x20080010L, 0x00080000L,
    0x00080010L, 0x20080810L, 0x00080800L, 0x00000010L,
    0x20080810L, 0x00080800L, 0x00080000L, 0x20000810L,
    0x20000010L, 0x20080000L, 0x00080810L, 0x00000000L,
    0x00000800L, 0x20000010L, 0x20000810L, 0x20080800L,
    0x20080000L, 0x00000810L, 0x00000010L, 0x20080010L,
    },{
    /* nibble 6 */
    0x00001000L, 0x00000080L, 0x00400080L, 0x00400001L,
    0x00401081L, 0x00001001L, 0x00001080L, 0x00000000L,
    0x00400000L, 0x00400081L, 0x00000081L, 0x00401000L,
    0x00000001L, 0x00401080L, 0x00401000L, 0x00000081L,
    0x00400081L, 0x00001000L, 0x00001001L, 0x00401081L,
    0x00000000L, 0x00400080L, 0x00400001L, 0x00001080L,
    0x00401001L, 0x00001081L, 0x00401080L, 0x00000001L,
    0x00001081L, 0x00401001L, 0x00000080L, 0x00400000L,
    0x00001081L, 0x00401000L, 0x00401001L, 0x00000081L,
    0x00001000L, 0x00000080L, 0x00400000L, 0x00401001L,
    0x00400081L, 0x00001081L, 0x00001080L, 0x00000000L,
    0x00000080L, 0x00400001L, 0x00000001L, 0x00400080L,
    0x00000000L, 0x00400081L, 0x00400080L, 0x00001080L,
    0x00000081L, 0x00001000L, 0x00401081L, 0x00400000L,
    0x00401080L, 0x00000001L, 0x00001001L, 0x00401081L,
    0x00400001L, 0x00401080L, 0x00401000L, 0x00001001L,
    },{
    /* nibble 7 */
    0x08200020L, 0x08208000L, 0x00008020L, 0x00000000L,
    0x08008000L, 0x00200020L, 0x08200000L, 0x08208020L,
    0x00000020L, 0x08000000L, 0x00208000L, 0x00008020L,
    0x00208020L, 0x08008020L, 0x08000020L, 0x08200000L,
    0x00008000L, 0x00208020L, 0x00200020L, 0x08008000L,
    0x08208020L, 0x08000020L, 0x00000000L, 0x00208000L,
    0x08000000L, 0x00200000L, 0x08008020L, 0x08200020L,
    0x00200000L, 0x00008000L, 0x08208000L, 0x00000020L,
    0x00200000L, 0x00008000L, 0x08000020L, 0x08208020L,
    0x00008020L, 0x08000000L, 0x00000000L, 0x00208000L,
    0x08200020L, 0x08008020L, 0x08008000L, 0x00200020L,
    0x08208000L, 0x00000020L, 0x00200020L, 0x08008000L,
    0x08208020L, 0x00200000L, 0x08200000L, 0x08000020L,
    0x00208000L, 0x00008020L, 0x08008020L, 0x08200000L,
    0x00000020L, 0x08208000L, 0x00208020L, 0x00000000L,
    0x08000000L, 0x08200020L, 0x00008000L, 0x00208020L,
    }
};

const uint64_t des_skb[8][64]={
{
    /* for C bits (numbered as per FIPS 46) 1 2 3 4 5 6 */
    0x00000000L,0x00000010L,0x20000000L,0x20000010L,
    0x00010000L,0x00010010L,0x20010000L,0x20010010L,
    0x00000800L,0x00000810L,0x20000800L,0x20000810L,
    0x00010800L,0x00010810L,0x20010800L,0x20010810L,
    0x00000020L,0x00000030L,0x20000020L,0x20000030L,
    0x00010020L,0x00010030L,0x20010020L,0x20010030L,
    0x00000820L,0x00000830L,0x20000820L,0x20000830L,
    0x00010820L,0x00010830L,0x20010820L,0x20010830L,
    0x00080000L,0x00080010L,0x20080000L,0x20080010L,
    0x00090000L,0x00090010L,0x20090000L,0x20090010L,
    0x00080800L,0x00080810L,0x20080800L,0x20080810L,
    0x00090800L,0x00090810L,0x20090800L,0x20090810L,
    0x00080020L,0x00080030L,0x20080020L,0x20080030L,
    0x00090020L,0x00090030L,0x20090020L,0x20090030L,
    0x00080820L,0x00080830L,0x20080820L,0x20080830L,
    0x00090820L,0x00090830L,0x20090820L,0x20090830L,
    },{
    /* for C bits (numbered as per FIPS 46) 7 8 10 11 12 13 */
    0x00000000L,0x02000000L,0x00002000L,0x02002000L,
    0x00200000L,0x02200000L,0x00202000L,0x02202000L,
    0x00000004L,0x02000004L,0x00002004L,0x02002004L,
    0x00200004L,0x02200004L,0x00202004L,0x02202004L,
    0x00000400L,0x02000400L,0x00002400L,0x02002400L,
    0x00200400L,0x02200400L,0x00202400L,0x02202400L,
    0x00000404L,0x02000404L,0x00002404L,0x02002404L,
    0x00200404L,0x02200404L,0x00202404L,0x02202404L,
    0x10000000L,0x12000000L,0x10002000L,0x12002000L,
    0x10200000L,0x12200000L,0x10202000L,0x12202000L,
    0x10000004L,0x12000004L,0x10002004L,0x12002004L,
    0x10200004L,0x12200004L,0x10202004L,0x12202004L,
    0x10000400L,0x12000400L,0x10002400L,0x12002400L,
    0x10200400L,0x12200400L,0x10202400L,0x12202400L,
    0x10000404L,0x12000404L,0x10002404L,0x12002404L,
    0x10200404L,0x12200404L,0x10202404L,0x12202404L,
    },{
    /* for C bits (numbered as per FIPS 46) 14 15 16 17 19 20 */
    0x00000000L,0x00000001L,0x00040000L,0x00040001L,
    0x01000000L,0x01000001L,0x01040000L,0x01040001L,
    0x00000002L,0x00000003L,0x00040002L,0x00040003L,
    0x01000002L,0x01000003L,0x01040002L,0x01040003L,
    0x00000200L,0x00000201L,0x00040200L,0x00040201L,
    0x01000200L,0x01000201L,0x01040200L,0x01040201L,
    0x00000202L,0x00000203L,0x00040202L,0x00040203L,
    0x01000202L,0x01000203L,0x01040202L,0x01040203L,
    0x08000000L,0x08000001L,0x08040000L,0x08040001L,
    0x09000000L,0x09000001L,0x09040000L,0x09040001L,
    0x08000002L,0x08000003L,0x08040002L,0x08040003L,
    0x09000002L,0x09000003L,0x09040002L,0x09040003L,
    0x08000200L,0x08000201L,0x08040200L,0x08040201L,
    0x09000200L,0x09000201L,0x09040200L,0x09040201L,
    0x08000202L,0x08000203L,0x08040202L,0x08040203L,
    0x09000202L,0x09000203L,0x09040202L,0x09040203L,
    },{
    /* for C bits (numbered as per FIPS 46) 21 23 24 26 27 28 */
    0x00000000L,0x00100000L,0x00000100L,0x00100100L,
    0x00000008L,0x00100008L,0x00000108L,0x00100108L,
    0x00001000L,0x00101000L,0x00001100L,0x00101100L,
    0x00001008L,0x00101008L,0x00001108L,0x00101108L,
    0x04000000L,0x04100000L,0x04000100L,0x04100100L,
    0x04000008L,0x04100008L,0x04000108L,0x04100108L,
    0x04001000L,0x04101000L,0x04001100L,0x04101100L,
    0x04001008L,0x04101008L,0x04001108L,0x04101108L,
    0x00020000L,0x00120000L,0x00020100L,0x00120100L,
    0x00020008L,0x00120008L,0x00020108L,0x00120108L,
    0x00021000L,0x00121000L,0x00021100L,0x00121100L,
    0x00021008L,0x00121008L,0x00021108L,0x00121108L,
    0x04020000L,0x04120000L,0x04020100L,0x04120100L,
    0x04020008L,0x04120008L,0x04020108L,0x04120108L,
    0x04021000L,0x04121000L,0x04021100L,0x04121100L,
    0x04021008L,0x04121008L,0x04021108L,0x04121108L,
    },{
    /* for D bits (numbered as per FIPS 46) 1 2 3 4 5 6 */
    0x00000000L,0x10000000L,0x00010000L,0x10010000L,
    0x00000004L,0x10000004L,0x00010004L,0x10010004L,
    0x20000000L,0x30000000L,0x20010000L,0x30010000L,
    0x20000004L,0x30000004L,0x20010004L,0x30010004L,
    0x00100000L,0x10100000L,0x00110000L,0x10110000L,
    0x00100004L,0x10100004L,0x00110004L,0x10110004L,
    0x20100000L,0x30100000L,0x20110000L,0x30110000L,
    0x20100004L,0x30100004L,0x20110004L,0x30110004L,
    0x00001000L,0x10001000L,0x00011000L,0x10011000L,
    0x00001004L,0x10001004L,0x00011004L,0x10011004L,
    0x20001000L,0x30001000L,0x20011000L,0x30011000L,
    0x20001004L,0x30001004L,0x20011004L,0x30011004L,
    0x00101000L,0x10101000L,0x00111000L,0x10111000L,
    0x00101004L,0x10101004L,0x00111004L,0x10111004L,
    0x20101000L,0x30101000L,0x20111000L,0x30111000L,
    0x20101004L,0x30101004L,0x20111004L,0x30111004L,
    },{
    /* for D bits (numbered as per FIPS 46) 8 9 11 12 13 14 */
    0x00000000L,0x08000000L,0x00000008L,0x08000008L,
    0x00000400L,0x08000400L,0x00000408L,0x08000408L,
    0x00020000L,0x08020000L,0x00020008L,0x08020008L,
    0x00020400L,0x08020400L,0x00020408L,0x08020408L,
    0x00000001L,0x08000001L,0x00000009L,0x08000009L,
    0x00000401L,0x08000401L,0x00000409L,0x08000409L,
    0x00020001L,0x08020001L,0x00020009L,0x08020009L,
    0x00020401L,0x08020401L,0x00020409L,0x08020409L,
    0x02000000L,0x0A000000L,0x02000008L,0x0A000008L,
    0x02000400L,0x0A000400L,0x02000408L,0x0A000408L,
    0x02020000L,0x0A020000L,0x02020008L,0x0A020008L,
    0x02020400L,0x0A020400L,0x02020408L,0x0A020408L,
    0x02000001L,0x0A000001L,0x02000009L,0x0A000009L,
    0x02000401L,0x0A000401L,0x02000409L,0x0A000409L,
    0x02020001L,0x0A020001L,0x02020009L,0x0A020009L,
    0x02020401L,0x0A020401L,0x02020409L,0x0A020409L,
    },{
    /* for D bits (numbered as per FIPS 46) 16 17 18 19 20 21 */
    0x00000000L,0x00000100L,0x00080000L,0x00080100L,
    0x01000000L,0x01000100L,0x01080000L,0x01080100L,
    0x00000010L,0x00000110L,0x00080010L,0x00080110L,
    0x01000010L,0x01000110L,0x01080010L,0x01080110L,
    0x00200000L,0x00200100L,0x00280000L,0x00280100L,
    0x01200000L,0x01200100L,0x01280000L,0x01280100L,
    0x00200010L,0x00200110L,0x00280010L,0x00280110L,
    0x01200010L,0x01200110L,0x01280010L,0x01280110L,
    0x00000200L,0x00000300L,0x00080200L,0x00080300L,
    0x01000200L,0x01000300L,0x01080200L,0x01080300L,
    0x00000210L,0x00000310L,0x00080210L,0x00080310L,
    0x01000210L,0x01000310L,0x01080210L,0x01080310L,
    0x00200200L,0x00200300L,0x00280200L,0x00280300L,
    0x01200200L,0x01200300L,0x01280200L,0x01280300L,
    0x00200210L,0x00200310L,0x00280210L,0x00280310L,
    0x01200210L,0x01200310L,0x01280210L,0x01280310L,
    },{
    /* for D bits (numbered as per FIPS 46) 22 23 24 25 27 28 */
    0x00000000L,0x04000000L,0x00040000L,0x04040000L,
    0x00000002L,0x04000002L,0x00040002L,0x04040002L,
    0x00002000L,0x04002000L,0x00042000L,0x04042000L,
    0x00002002L,0x04002002L,0x00042002L,0x04042002L,
    0x00000020L,0x04000020L,0x00040020L,0x04040020L,
    0x00000022L,0x04000022L,0x00040022L,0x04040022L,
    0x00002020L,0x04002020L,0x00042020L,0x04042020L,
    0x00002022L,0x04002022L,0x00042022L,0x04042022L,
    0x00000800L,0x04000800L,0x00040800L,0x04040800L,
    0x00000802L,0x04000802L,0x00040802L,0x04040802L,
    0x00002800L,0x04002800L,0x00042800L,0x04042800L,
    0x00002802L,0x04002802L,0x00042802L,0x04042802L,
    0x00000820L,0x04000820L,0x00040820L,0x04040820L,
    0x00000822L,0x04000822L,0x00040822L,0x04040822L,
    0x00002820L,0x04002820L,0x00042820L,0x04042820L,
    0x00002822L,0x04002822L,0x00042822L,0x04042822L,
    }
};

#define DES_PERM_OP(a,b,t,n,m) ((t)=((((a)>>(n))^(b))&(m)),\
	(b)^=(t),\
	(a)^=((t)<<(n)))

#define DES_HPERM_OP(a,t,n,m) ((t)=((((a)<<(16-(n)))^(a))&(m)),\
	(a)=(a)^(t)^(t>>(16-(n))))

const int32_t des_shifts2[16]={0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0};
#define des_c2l(c,l)	(l =((uint64_t)(*((c)++)))    , \
			 l|=((uint64_t)(*((c)++)))<< 8L, \
			 l|=((uint64_t)(*((c)++)))<<16L, \
			 l|=((uint64_t)(*((c)++)))<<24L)

#define des_c2ln(c,l1,l2,n)	{ \
			c+=n; \
			l1=l2=0; \
			switch (n) { \
			case 8: l2 =((uint64_t)(*(--(c))))<<24L; \
			case 7: l2|=((uint64_t)(*(--(c))))<<16L; \
			case 6: l2|=((uint64_t)(*(--(c))))<< 8L; \
			case 5: l2|=((uint64_t)(*(--(c))));     \
			case 4: l1 =((uint64_t)(*(--(c))))<<24L; \
			case 3: l1|=((uint64_t)(*(--(c))))<<16L; \
			case 2: l1|=((uint64_t)(*(--(c))))<< 8L; \
			case 1: l1|=((uint64_t)(*(--(c))));     \
				} \
			}

#define des_l2c(l,c)	(*((c)++)=(uint8_t)(((l)     )&0xff), \
			 *((c)++)=(uint8_t)(((l)>> 8L)&0xff), \
			 *((c)++)=(uint8_t)(((l)>>16L)&0xff), \
			 *((c)++)=(uint8_t)(((l)>>24L)&0xff))

#define des_n2l(c,l)	(l =((uint64_t)(*((c)++)))<<24L, \
			 l|=((uint64_t)(*((c)++)))<<16L, \
			 l|=((uint64_t)(*((c)++)))<< 8L, \
			 l|=((uint64_t)(*((c)++))))

#define des_l2n(l,c)	(*((c)++)=(uint8_t)(((l)>>24L)&0xff), \
			 *((c)++)=(uint8_t)(((l)>>16L)&0xff), \
			 *((c)++)=(uint8_t)(((l)>> 8L)&0xff), \
			 *((c)++)=(uint8_t)(((l)     )&0xff))

#define des_l2cn(l1,l2,c,n)	{ \
			c+=n; \
			switch (n) { \
			case 8: *(--(c))=(uint8_t)(((l2)>>24L)&0xff); \
			case 7: *(--(c))=(uint8_t)(((l2)>>16L)&0xff); \
			case 6: *(--(c))=(uint8_t)(((l2)>> 8L)&0xff); \
			case 5: *(--(c))=(uint8_t)(((l2)     )&0xff); \
			case 4: *(--(c))=(uint8_t)(((l1)>>24L)&0xff); \
			case 3: *(--(c))=(uint8_t)(((l1)>>16L)&0xff); \
			case 2: *(--(c))=(uint8_t)(((l1)>> 8L)&0xff); \
			case 1: *(--(c))=(uint8_t)(((l1)     )&0xff); \
				} \
			}

#define DES_ENCRYPT(L,R,S)	\
	U.l=R^s[S+1]; \
	T.s[0]=((U.s[0]>>4)|(U.s[1]<<12))&0x3f3f; \
	T.s[1]=((U.s[1]>>4)|(U.s[0]<<12))&0x3f3f; \
	U.l=(R^s[S  ])&0x3f3f3f3fL; \
	L^=	des_SPtrans[1][(T.c[0])]| \
		des_SPtrans[3][(T.c[1])]| \
		des_SPtrans[5][(T.c[2])]| \
		des_SPtrans[7][(T.c[3])]| \
		des_SPtrans[0][(U.c[0])]| \
		des_SPtrans[2][(U.c[1])]| \
		des_SPtrans[4][(U.c[2])]| \
		des_SPtrans[6][(U.c[3])];

#define DES_IP(l,r) \
	{ \
	register uint64_t tt; \
	DES_PERM_OP(r,l,tt, 4,0x0f0f0f0fL); \
	DES_PERM_OP(l,r,tt,16,0x0000ffffL); \
	DES_PERM_OP(r,l,tt, 2,0x33333333L); \
	DES_PERM_OP(l,r,tt, 8,0x00ff00ffL); \
	DES_PERM_OP(r,l,tt, 1,0x55555555L); \
	}

#define DES_FP(l,r) \
	{ \
	register uint64_t tt; \
	DES_PERM_OP(l,r,tt, 1,0x55555555L); \
	DES_PERM_OP(r,l,tt, 8,0x00ff00ffL); \
	DES_PERM_OP(l,r,tt, 2,0x33333333L); \
	DES_PERM_OP(r,l,tt,16,0x0000ffffL); \
	DES_PERM_OP(l,r,tt, 4,0x0f0f0f0fL); \
	}

typedef struct des_ks_struct
{
	union
	{
		uint64_t pad[2];
	} ks;
} des_key_schedule[16];

int32_t des_set_key(uint8_t (&key)[LC_DES_BUFF_LEN], des_key_schedule schedule)
{
	register uint64_t c,d,t,s;
	register uint8_t *in;
	register uint64_t *k;
	register int32_t i;

	k=(uint64_t *)schedule;
	in=(uint8_t *)key;

	des_c2l(in,c);
	des_c2l(in,d);

	DES_PERM_OP (d,c,t,4,0x0f0f0f0fL);
	DES_HPERM_OP(c,t,-2,0xcccc0000L);
	DES_HPERM_OP(d,t,-2,0xcccc0000L);
	DES_PERM_OP (d,c,t,1,0x55555555L);
	DES_PERM_OP (c,d,t,8,0x00ff00ffL);
	DES_PERM_OP (d,c,t,1,0x55555555L);
	d=	(((d&0x000000ffL)<<16L)| (d&0x0000ff00L)     |
		 ((d&0x00ff0000L)>>16L)|((c&0xf0000000L)>>4L));
	c&=0x0fffffffL;

	for (i=0; i<16; i++)
		{
		if (des_shifts2[i])
			{ c=((c>>2L)|(c<<26L)); d=((d>>2L)|(d<<26L)); }
		else
			{ c=((c>>1L)|(c<<27L)); d=((d>>1L)|(d<<27L)); }
		c&=0x0fffffffL;
		d&=0x0fffffffL;

		s=	des_skb[0][ (c    )&0x3f                ]|
			des_skb[1][((c>> 6)&0x03)|((c>> 7L)&0x3c)]|
			des_skb[2][((c>>13)&0x0f)|((c>>14L)&0x30)]|
			des_skb[3][((c>>20)&0x01)|((c>>21L)&0x06) |
						  ((c>>22L)&0x38)];
		t=	des_skb[4][ (d    )&0x3f                ]|
			des_skb[5][((d>> 7L)&0x03)|((d>> 8L)&0x3c)]|
			des_skb[6][ (d>>15L)&0x3f                ]|
			des_skb[7][((d>>21L)&0x0f)|((d>>22L)&0x30)];

		/* table contained 0213 4657 */
		*(k++)=((t<<16L)|(s&0x0000ffffL))&0xffffffffL;
		s=     ((s>>16L)|(t&0xffff0000L));
		
		s=(s<<4L)|(s>>28L);
		*(k++)=s&0xffffffffL;
		}
	return(0);
}

void des_encrypt(uint64_t *data, des_key_schedule ks, int32_t encrypt)
{
	register uint64_t l,r,u;
	union fudge 
	{
		uint64_t  l;
		unsigned short s[2];
		uint8_t  c[4];
	} U,T;
	register int32_t i;
	register uint64_t *s;

	u=data[0];
	r=data[1];

	DES_IP(u,r);

	l=(r<<1)|(r>>31);
	r=(u<<1)|(u>>31);

	/* clear the top bits on machines with 8byte longs */
	l&=0xffffffffL;
	r&=0xffffffffL;

	s=(uint64_t *)ks;
	if (encrypt)
	{
		for (i=0; i<32; i+=4)
		{
			DES_ENCRYPT(l,r,i+0); /*  1 */
			DES_ENCRYPT(r,l,i+2); /*  2 */
		}
	}
	else
	{
		for (i=30; i>0; i-=4)
		{
			DES_ENCRYPT(l,r,i-0); /* 16 */
			DES_ENCRYPT(r,l,i-2); /* 15 */
		}
	}
	l=(l>>1)|(l<<31);
	r=(r>>1)|(r<<31);
	/* clear the top bits on machines with 8byte longs */
	l&=0xffffffffL;
	r&=0xffffffffL;

	DES_FP(r,l);
	data[0]=l;
	data[1]=r;
}

void des_ecb_encrypt(uint8_t (&input)[LC_DES_BUFF_LEN], uint8_t (&output)[LC_DES_BUFF_LEN], des_key_schedule ks, int32_t encrypt)
{
	register uint64_t l;
	register uint8_t *in,*out;
	uint64_t ll[2];

	in=(uint8_t *)input;
	out=(uint8_t *)output;
	des_c2l(in,l); ll[0]=l;
	des_c2l(in,l); ll[1]=l;
	des_encrypt(ll,ks,encrypt);
	l=ll[0]; des_l2c(l,out);
	l=ll[1]; des_l2c(l,out);
	l=ll[0]=ll[1]=0;
}

void lc_des(const std::string & strkey, const char * s_text, size_t s_len, char (&d_text)[LC_DES_BUFF_LEN])
{
    uint8_t key[LC_DES_BUFF_LEN];
    memset(key, 0, sizeof(key));
    memcpy(key, strkey.c_str(), std::min<size_t>(strkey.size(), LC_DES_BUFF_LEN));

    uint8_t stext[LC_DES_BUFF_LEN];
    memset(stext, 0, sizeof(stext));
    memcpy(stext, s_text, std::min<size_t>(s_len, LC_DES_BUFF_LEN));
    
	des_key_schedule sch;
	des_set_key(key, sch);
	des_ecb_encrypt(stext, (uint8_t (&)[LC_DES_BUFF_LEN])d_text, &(sch[0]), 1);
}

std::string lc_des_str(const std::string & strkey, const std::string & s_text)
{
	char d_text[LC_DES_BUFF_LEN] = {0};
    lc_des(strkey, s_text.c_str(), s_text.size(), d_text);

	std::string ret;
	for (int32_t i = 0 ; i < LC_DES_BUFF_LEN; i++ )
	{
		std::string rettmp = lc_itoa16((uint8_t)d_text[i]);

		if (rettmp.size() == 1)
		{
			ret += "0";
			ret += rettmp;
		}
		else
		{
			ret += rettmp;
		}
	}

    return ret;
}

void lc_undes(const std::string & strkey, const char * s_text, size_t s_len, char (&d_text)[LC_DES_BUFF_LEN])
{
    uint8_t key[LC_DES_BUFF_LEN] = {0};
    memset(key, 0, sizeof(key));
    memcpy(key, strkey.c_str(), std::min<size_t>(strkey.size(), LC_DES_BUFF_LEN));

    uint8_t stext[LC_DES_BUFF_LEN] = {0};
    memset(stext, 0, sizeof(stext));
    memcpy(stext, s_text, std::min<size_t>(s_len, LC_DES_BUFF_LEN));
    
	des_key_schedule sch;
	des_set_key(key, sch);
	des_ecb_encrypt(stext, (uint8_t (&)[LC_DES_BUFF_LEN])d_text, &(sch[0]), 0);
}

std::string lc_undes_str(const std::string & strkey, const std::string & s_text)
{
    char stext[LC_DES_BUFF_LEN] = {0};
    memset(stext, 0, sizeof(stext));
	for (int32_t i = 0; i < LC_DES_BUFF_LEN && ((2 * i + 2) <= (int)s_text.size()); i++)
    {
        std::string tmp = s_text.substr(2 * i, 2);
        stext[i] = lc_atoi16(tmp);
    }

	union
	{
		char d_buff[LC_DES_BUFF_LEN + 1];
		char d_text[LC_DES_BUFF_LEN];
	} dtext;
	memset(&dtext, 0, sizeof(dtext));
	lc_undes(strkey, stext, LC_DES_BUFF_LEN, dtext.d_text);
    
	return std::string(dtext.d_text);
}


