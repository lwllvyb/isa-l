########################################################################
#  Copyright(c) 2019 Arm Corporation All rights reserved.
#
#  Redistribution and use in source and binary forms, with or without
#  modification, are permitted provided that the following conditions
#  are met:
#    * Redistributions of source code must retain the above copyright
#      notice, this list of conditions and the following disclaimer.
#    * Redistributions in binary form must reproduce the above copyright
#      notice, this list of conditions and the following disclaimer in
#      the documentation and/or other materials provided with the
#      distribution.
#    * Neither the name of Arm Corporation nor the names of its
#      contributors may be used to endorse or promote products derived
#      from this software without specific prior written permission.
#
#  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
#  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
#  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
#  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
#  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
#  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
#  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
#  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
#  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
#  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
#  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#########################################################################

.equ	p4_low_b0, (0xf020)
.equ	p4_low_b1, 0x540d
.equ	p4_low_b2, 0x43ca
.equ	p4_low_b3, 0x5f68
.equ	p4_high_b0, 0xb83f
.equ	p4_high_b1, 0x1205
.equ	p4_high_b2, 0xb698
.equ	p4_high_b3, 0xddf4

.equ	p1_low_b0, (0xfab6)
.equ	p1_low_b1, 0xeb52
.equ	p1_low_b2, 0xc3c7
.equ	p1_low_b3, 0x05f5
.equ	p1_high_b0, 0x740e
.equ	p1_high_b1, 0xd257
.equ	p1_high_b2, 0x38a7
.equ	p1_high_b3, 0x4eb9

.equ	p0_low_b0, (0xfab6)
.equ	p0_low_b1, 0xeb52
.equ	p0_low_b2, 0xc3c7
.equ	p0_low_b3, 0x05f5
.equ	p0_high_b0, 0x0
.equ	p0_high_b1, 0x0
.equ	p0_high_b2, 0x0
.equ	p0_high_b3, 0x0

.equ	br_low_b0, (0xf872)
.equ	br_low_b1, 0x6cc4
.equ	br_low_b2, 0x29d0
.equ	br_low_b3, 0x578d
.equ	br_high_b0, 0x3693
.equ	br_high_b1, 0xa9ea
.equ	br_high_b2, 0xe1eb
.equ	br_high_b3, 0x42f0

ASM_DEF_RODATA
	.align	4
	.set	.lanchor_crc_tab,. + 0
#ifndef __APPLE__
	.type	crc64_tab, %object
	.size	crc64_tab, 2048
#endif
crc64_tab:
	.xword 0x0000000000000000, 0x42f0e1eba9ea3693
	.xword 0x85e1c3d753d46d26, 0xc711223cfa3e5bb5
	.xword 0x493366450e42ecdf, 0x0bc387aea7a8da4c
	.xword 0xccd2a5925d9681f9, 0x8e224479f47cb76a
	.xword 0x9266cc8a1c85d9be, 0xd0962d61b56fef2d
	.xword 0x17870f5d4f51b498, 0x5577eeb6e6bb820b
	.xword 0xdb55aacf12c73561, 0x99a54b24bb2d03f2
	.xword 0x5eb4691841135847, 0x1c4488f3e8f96ed4
	.xword 0x663d78ff90e185ef, 0x24cd9914390bb37c
	.xword 0xe3dcbb28c335e8c9, 0xa12c5ac36adfde5a
	.xword 0x2f0e1eba9ea36930, 0x6dfeff5137495fa3
	.xword 0xaaefdd6dcd770416, 0xe81f3c86649d3285
	.xword 0xf45bb4758c645c51, 0xb6ab559e258e6ac2
	.xword 0x71ba77a2dfb03177, 0x334a9649765a07e4
	.xword 0xbd68d2308226b08e, 0xff9833db2bcc861d
	.xword 0x388911e7d1f2dda8, 0x7a79f00c7818eb3b
	.xword 0xcc7af1ff21c30bde, 0x8e8a101488293d4d
	.xword 0x499b3228721766f8, 0x0b6bd3c3dbfd506b
	.xword 0x854997ba2f81e701, 0xc7b97651866bd192
	.xword 0x00a8546d7c558a27, 0x4258b586d5bfbcb4
	.xword 0x5e1c3d753d46d260, 0x1cecdc9e94ace4f3
	.xword 0xdbfdfea26e92bf46, 0x990d1f49c77889d5
	.xword 0x172f5b3033043ebf, 0x55dfbadb9aee082c
	.xword 0x92ce98e760d05399, 0xd03e790cc93a650a
	.xword 0xaa478900b1228e31, 0xe8b768eb18c8b8a2
	.xword 0x2fa64ad7e2f6e317, 0x6d56ab3c4b1cd584
	.xword 0xe374ef45bf6062ee, 0xa1840eae168a547d
	.xword 0x66952c92ecb40fc8, 0x2465cd79455e395b
	.xword 0x3821458aada7578f, 0x7ad1a461044d611c
	.xword 0xbdc0865dfe733aa9, 0xff3067b657990c3a
	.xword 0x711223cfa3e5bb50, 0x33e2c2240a0f8dc3
	.xword 0xf4f3e018f031d676, 0xb60301f359dbe0e5
	.xword 0xda050215ea6c212f, 0x98f5e3fe438617bc
	.xword 0x5fe4c1c2b9b84c09, 0x1d14202910527a9a
	.xword 0x93366450e42ecdf0, 0xd1c685bb4dc4fb63
	.xword 0x16d7a787b7faa0d6, 0x5427466c1e109645
	.xword 0x4863ce9ff6e9f891, 0x0a932f745f03ce02
	.xword 0xcd820d48a53d95b7, 0x8f72eca30cd7a324
	.xword 0x0150a8daf8ab144e, 0x43a04931514122dd
	.xword 0x84b16b0dab7f7968, 0xc6418ae602954ffb
	.xword 0xbc387aea7a8da4c0, 0xfec89b01d3679253
	.xword 0x39d9b93d2959c9e6, 0x7b2958d680b3ff75
	.xword 0xf50b1caf74cf481f, 0xb7fbfd44dd257e8c
	.xword 0x70eadf78271b2539, 0x321a3e938ef113aa
	.xword 0x2e5eb66066087d7e, 0x6cae578bcfe24bed
	.xword 0xabbf75b735dc1058, 0xe94f945c9c3626cb
	.xword 0x676dd025684a91a1, 0x259d31cec1a0a732
	.xword 0xe28c13f23b9efc87, 0xa07cf2199274ca14
	.xword 0x167ff3eacbaf2af1, 0x548f120162451c62
	.xword 0x939e303d987b47d7, 0xd16ed1d631917144
	.xword 0x5f4c95afc5edc62e, 0x1dbc74446c07f0bd
	.xword 0xdaad56789639ab08, 0x985db7933fd39d9b
	.xword 0x84193f60d72af34f, 0xc6e9de8b7ec0c5dc
	.xword 0x01f8fcb784fe9e69, 0x43081d5c2d14a8fa
	.xword 0xcd2a5925d9681f90, 0x8fdab8ce70822903
	.xword 0x48cb9af28abc72b6, 0x0a3b7b1923564425
	.xword 0x70428b155b4eaf1e, 0x32b26afef2a4998d
	.xword 0xf5a348c2089ac238, 0xb753a929a170f4ab
	.xword 0x3971ed50550c43c1, 0x7b810cbbfce67552
	.xword 0xbc902e8706d82ee7, 0xfe60cf6caf321874
	.xword 0xe224479f47cb76a0, 0xa0d4a674ee214033
	.xword 0x67c58448141f1b86, 0x253565a3bdf52d15
	.xword 0xab1721da49899a7f, 0xe9e7c031e063acec
	.xword 0x2ef6e20d1a5df759, 0x6c0603e6b3b7c1ca
	.xword 0xf6fae5c07d3274cd, 0xb40a042bd4d8425e
	.xword 0x731b26172ee619eb, 0x31ebc7fc870c2f78
	.xword 0xbfc9838573709812, 0xfd39626eda9aae81
	.xword 0x3a28405220a4f534, 0x78d8a1b9894ec3a7
	.xword 0x649c294a61b7ad73, 0x266cc8a1c85d9be0
	.xword 0xe17dea9d3263c055, 0xa38d0b769b89f6c6
	.xword 0x2daf4f0f6ff541ac, 0x6f5faee4c61f773f
	.xword 0xa84e8cd83c212c8a, 0xeabe6d3395cb1a19
	.xword 0x90c79d3fedd3f122, 0xd2377cd44439c7b1
	.xword 0x15265ee8be079c04, 0x57d6bf0317edaa97
	.xword 0xd9f4fb7ae3911dfd, 0x9b041a914a7b2b6e
	.xword 0x5c1538adb04570db, 0x1ee5d94619af4648
	.xword 0x02a151b5f156289c, 0x4051b05e58bc1e0f
	.xword 0x87409262a28245ba, 0xc5b073890b687329
	.xword 0x4b9237f0ff14c443, 0x0962d61b56fef2d0
	.xword 0xce73f427acc0a965, 0x8c8315cc052a9ff6
	.xword 0x3a80143f5cf17f13, 0x7870f5d4f51b4980
	.xword 0xbf61d7e80f251235, 0xfd913603a6cf24a6
	.xword 0x73b3727a52b393cc, 0x31439391fb59a55f
	.xword 0xf652b1ad0167feea, 0xb4a25046a88dc879
	.xword 0xa8e6d8b54074a6ad, 0xea16395ee99e903e
	.xword 0x2d071b6213a0cb8b, 0x6ff7fa89ba4afd18
	.xword 0xe1d5bef04e364a72, 0xa3255f1be7dc7ce1
	.xword 0x64347d271de22754, 0x26c49cccb40811c7
	.xword 0x5cbd6cc0cc10fafc, 0x1e4d8d2b65facc6f
	.xword 0xd95caf179fc497da, 0x9bac4efc362ea149
	.xword 0x158e0a85c2521623, 0x577eeb6e6bb820b0
	.xword 0x906fc95291867b05, 0xd29f28b9386c4d96
	.xword 0xcedba04ad0952342, 0x8c2b41a1797f15d1
	.xword 0x4b3a639d83414e64, 0x09ca82762aab78f7
	.xword 0x87e8c60fded7cf9d, 0xc51827e4773df90e
	.xword 0x020905d88d03a2bb, 0x40f9e43324e99428
	.xword 0x2cffe7d5975e55e2, 0x6e0f063e3eb46371
	.xword 0xa91e2402c48a38c4, 0xebeec5e96d600e57
	.xword 0x65cc8190991cb93d, 0x273c607b30f68fae
	.xword 0xe02d4247cac8d41b, 0xa2dda3ac6322e288
	.xword 0xbe992b5f8bdb8c5c, 0xfc69cab42231bacf
	.xword 0x3b78e888d80fe17a, 0x7988096371e5d7e9
	.xword 0xf7aa4d1a85996083, 0xb55aacf12c735610
	.xword 0x724b8ecdd64d0da5, 0x30bb6f267fa73b36
	.xword 0x4ac29f2a07bfd00d, 0x08327ec1ae55e69e
	.xword 0xcf235cfd546bbd2b, 0x8dd3bd16fd818bb8
	.xword 0x03f1f96f09fd3cd2, 0x41011884a0170a41
	.xword 0x86103ab85a2951f4, 0xc4e0db53f3c36767
	.xword 0xd8a453a01b3a09b3, 0x9a54b24bb2d03f20
	.xword 0x5d45907748ee6495, 0x1fb5719ce1045206
	.xword 0x919735e51578e56c, 0xd367d40ebc92d3ff
	.xword 0x1476f63246ac884a, 0x568617d9ef46bed9
	.xword 0xe085162ab69d5e3c, 0xa275f7c11f7768af
	.xword 0x6564d5fde549331a, 0x279434164ca30589
	.xword 0xa9b6706fb8dfb2e3, 0xeb46918411358470
	.xword 0x2c57b3b8eb0bdfc5, 0x6ea7525342e1e956
	.xword 0x72e3daa0aa188782, 0x30133b4b03f2b111
	.xword 0xf7021977f9cceaa4, 0xb5f2f89c5026dc37
	.xword 0x3bd0bce5a45a6b5d, 0x79205d0e0db05dce
	.xword 0xbe317f32f78e067b, 0xfcc19ed95e6430e8
	.xword 0x86b86ed5267cdbd3, 0xc4488f3e8f96ed40
	.xword 0x0359ad0275a8b6f5, 0x41a94ce9dc428066
	.xword 0xcf8b0890283e370c, 0x8d7be97b81d4019f
	.xword 0x4a6acb477bea5a2a, 0x089a2aacd2006cb9
	.xword 0x14dea25f3af9026d, 0x562e43b4931334fe
	.xword 0x913f6188692d6f4b, 0xd3cf8063c0c759d8
	.xword 0x5dedc41a34bbeeb2, 0x1f1d25f19d51d821
	.xword 0xd80c07cd676f8394, 0x9afce626ce85b507
