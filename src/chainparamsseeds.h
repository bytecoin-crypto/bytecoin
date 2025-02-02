#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    0x01,0x04,0xb2,0x4f,0x85,0x3c,0x18,0xbd,
    0x02,0x10,0x2a,0x01,0x7e,0x00,0xe0,0x00,0x08,0x6b,0x4a,0xd3,0x2c,0x87,0x17,0xa3,0x1a,0x36,0x18,0xbd,
};

static const uint8_t chainparams_seed_test[] = {
    0x01,0x04,0xb2,0x4f,0x85,0x3c,0x3f,0xcd,
    0x02,0x10,0x2a,0x01,0x7e,0x00,0xe0,0x00,0x08,0x6b,0x10,0xaa,0x18,0xb4,0xdf,0x3f,0x11,0x61,0x3f,0xcd,
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
