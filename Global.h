#pragma once
#ifndef GLOBAL_H_
#define GLOBAL_H_
#include<qstring.h>
#include <cstring>
#include <fstream>
struct PatientInfo    //用来保留用户的信息，在添加用户时使用
{
	QString number = "";
	QString name = "";
	QString sex = "";
	QString nationality = "";
	QString job = "";
	QString marriage = "";
	QString birthCity = "";
	QString birthCounty = "";
	QString birthDistrict = "";
	QString liveCity = "";
	QString liveCounty = "";
	QString liveDistrict = "";
	QString motherCity = ""; //户口
	QString motherCounty = "";
	QString motherDistrict = "";
	QString contactPerson = "";
	QString cttPerson_Workplace = "";
	QString relationship = "";
	QString cttPhone = "";
	QString room = "";
	QString bedNumber = "";
	QString department = "";//科室
	QString doctor = "";
	QString zhusu = "";
	QString Id = "";
	QString birthday = "";
	QString origon = "";//籍贯
	QString phone = "";
	QString hospitalWay = "";
	QString hospitalTime = "";
};
extern struct PatientInfo AddInfo;
class SHA256
{
protected:
	typedef unsigned char uint8;
	typedef unsigned int uint32;
	typedef unsigned long long uint64;

	const static uint32 sha256_k[];
	static const unsigned int SHA224_256_BLOCK_SIZE = (512 / 8);
public:
	void init();
	void update(const unsigned char *message, unsigned int len);
	void final(unsigned char *digest);
	static const unsigned int DIGEST_SIZE = (256 / 8);

protected:
	void transform(const unsigned char *message, unsigned int block_nb);
	unsigned int m_tot_len;
	unsigned int m_len;
	unsigned char m_block[2 * SHA224_256_BLOCK_SIZE];
	uint32 m_h[8];
};

std::string sha256(std::string input);

#define SHA2_SHFR(x, n)    (x >> n)
#define SHA2_ROTR(x, n)   ((x >> n) | (x << ((sizeof(x) << 3) - n)))
#define SHA2_ROTL(x, n)   ((x << n) | (x >> ((sizeof(x) << 3) - n)))
#define SHA2_CH(x, y, z)  ((x & y) ^ (~x & z))
#define SHA2_MAJ(x, y, z) ((x & y) ^ (x & z) ^ (y & z))
#define SHA256_F1(x) (SHA2_ROTR(x,  2) ^ SHA2_ROTR(x, 13) ^ SHA2_ROTR(x, 22))
#define SHA256_F2(x) (SHA2_ROTR(x,  6) ^ SHA2_ROTR(x, 11) ^ SHA2_ROTR(x, 25))
#define SHA256_F3(x) (SHA2_ROTR(x,  7) ^ SHA2_ROTR(x, 18) ^ SHA2_SHFR(x,  3))
#define SHA256_F4(x) (SHA2_ROTR(x, 17) ^ SHA2_ROTR(x, 19) ^ SHA2_SHFR(x, 10))
#define SHA2_UNPACK32(x, str)                 \
{                                             \
    *((str) + 3) = (uint8) ((x)      );       \
    *((str) + 2) = (uint8) ((x) >>  8);       \
    *((str) + 1) = (uint8) ((x) >> 16);       \
    *((str) + 0) = (uint8) ((x) >> 24);       \
}
#define SHA2_PACK32(str, x)                   \
{                                             \
    *(x) =   ((uint32) *((str) + 3)      )    \
           | ((uint32) *((str) + 2) <<  8)    \
           | ((uint32) *((str) + 1) << 16)    \
           | ((uint32) *((str) + 0) << 24);   \
}
#endif // !GLOBAL_H_
