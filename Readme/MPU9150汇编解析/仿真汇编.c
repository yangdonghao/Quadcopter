0x0800E1D0 4240      DCW           0x4240
0x0800E1D2 000F      DCW           0x000F
   463: { 
0x0800E1D4 B570      PUSH          {r4-r6,lr}
0x0800E1D6 4604      MOV           r4,r0
0x0800E1D8 460D      MOV           r5,r1
   464:     if (memcmp(inv_data_builder.save.compass_bias, bias, sizeof(inv_data_builder.save.compass_bias))) { 
0x0800E1DA 220C      MOVS          r2,#0x0C
0x0800E1DC 4621      MOV           r1,r4
0x0800E1DE 480E      LDR           r0,[pc,#56]  ; @0x0800E218
0x0800E1E0 F7F7FE98  BL.W          memcmp (0x08005F14)
0x0800E1E4 B148      CBZ           r0,0x0800E1FA
   465:         memcpy(inv_data_builder.save.compass_bias, bias, sizeof(inv_data_builder.save.compass_bias)); 
0x0800E1E6 480C      LDR           r0,[pc,#48]  ; @0x0800E218
0x0800E1E8 3874      SUBS          r0,r0,#0x74
0x0800E1EA E894000E  LDM           r4,{r1-r3}
0x0800E1EE 3074      ADDS          r0,r0,#0x74
0x0800E1F0 C00E      STM           r0!,{r1-r3}
   466:         inv_apply_calibration(&sensors.compass, inv_data_builder.save.compass_bias); 
   467:     } 
0x0800E1F2 4909      LDR           r1,[pc,#36]  ; @0x0800E218
0x0800E1F4 4809      LDR           r0,[pc,#36]  ; @0x0800E21C
0x0800E1F6 F7FEFB57  BL.W          inv_apply_calibration (0x0800C8A8)
   468:     sensors.compass.accuracy = accuracy; 
0x0800E1FA 4808      LDR           r0,[pc,#32]  ; @0x0800E21C
0x0800E1FC 3888      SUBS          r0,r0,#0x88
0x0800E1FE F8C050BC  STR           r5,[r0,#0xBC]
   469:     inv_data_builder.save.compass_accuracy = accuracy; 
0x0800E202 4805      LDR           r0,[pc,#20]  ; @0x0800E218
0x0800E204 38F4      SUBS          r0,r0,#0xF4
0x0800E206 F8C05138  STR           r5,[r0,#0x138]
   470:     inv_set_message(INV_MSG_NEW_CB_EVENT, INV_MSG_NEW_CB_EVENT, 0); 
0x0800E20A 2200      MOVS          r2,#0x00
0x0800E20C 2108      MOVS          r1,#0x08
0x0800E20E 4608      MOV           r0,r1
0x0800E210 F000F96C  BL.W          inv_set_message (0x0800E4EC)
   471: } 
   472:  
   473: /** Set the state of a compass disturbance 
   474: * @param[in] dist 1=disturbance, 0=no disturbance 
   475: */ 
   476: void inv_set_compass_disturbance(int dist) 
   477: { 
0x0800E214 BD70      POP           {r4-r6,pc}
0x0800E216 0000      DCW           0x0000
0x0800E218 0230      DCW           0x0230
0x0800E21A 2000      DCW           0x2000
0x0800E21C 0304      DCW           0x0304
0x0800E21E 2000      DCW           0x2000
   382: { 
0x0800E220 B510      PUSH          {r4,lr}
   383:     memcpy(rh.compass_bias_error, bias_error, sizeof(rh.compass_bias_error)); 
0x0800E222 4903      LDR           r1,[pc,#12]  ; @0x0800E230
0x0800E224 E890001C  LDM           r0,{r2-r4}
0x0800E228 3158      ADDS          r1,r1,#0x58
0x0800E22A C11C      STM           r1!,{r2-r4}
   384: } 
0x0800E22C BD10      POP           {r4,pc}
0x0800E22E 0000      DCW           0x0000
0x0800E230 04D8      DCW           0x04D8
0x0800E232 2000      DCW           0x2000
   358:     rh.got_compass_bias = state; 
0x0800E234 4901      LDR           r1,[pc,#4]  ; @0x0800E23C
0x0800E236 6708      STR           r0,[r1,#0x70]
   359: } 
   360:  
   361: /** Sets the compass state. 
   362:  * @param[in] state Compass state. It can be retrieved with inv_get_compass_state(). 
   363:  */ 
   364: void inv_set_compass_state(int state) 
   365: { 
0x0800E238 4770      BX            lr
0x0800E23A 0000      DCW           0x0000
0x0800E23C 04D8      DCW           0x04D8
0x0800E23E 2000      DCW           0x2000
    72: { 
0x0800E240 B570      PUSH          {r4-r6,lr}
    73:     rh.status |= INV_COMPASS_CORRECTION_SET; 
0x0800E242 4A07      LDR           r2,[pc,#28]  ; @0x0800E260
0x0800E244 6FD2      LDR           r2,[r2,#0x7C]
0x0800E246 F0420201  ORR           r2,r2,#0x01
0x0800E24A 4B05      LDR           r3,[pc,#20]  ; @0x0800E260
0x0800E24C 67DA      STR           r2,[r3,#0x7C]
    74:     memcpy(rh.compass_correction, data, sizeof(rh.compass_correction)); 
0x0800E24E 461A      MOV           r2,r3
0x0800E250 E8900078  LDM           r0,{r3-r6}
0x0800E254 3240      ADDS          r2,r2,#0x40
0x0800E256 C278      STM           r2!,{r3-r6}
    75:     rh.nav_timestamp = timestamp; 
0x0800E258 3A50      SUBS          r2,r2,#0x50
0x0800E25A 6211      STR           r1,[r2,#0x20]
    76: } 
0x0800E25C BD70      POP           {r4-r6,pc}
0x0800E25E 0000      DCW           0x0000
0x0800E260 04D8      DCW           0x04D8
0x0800E262 2000      DCW           0x2000
   478:     inv_data_builder.compass_disturbance = dist; 
0x0800E264 4901      LDR           r1,[pc,#4]  ; @0x0800E26C
0x0800E266 F8C1013C  STR           r0,[r1,#0x13C]
   479: } 
0x0800E26A 4770      BX            lr
0x0800E26C 013C      DCW           0x013C
0x0800E26E 2000      DCW           0x2000
   406: { 
   407: #ifdef INV_PLAYBACK_DBG 
   408:     if (inv_data_builder.debug_mode == RD_RECORD) { 
   409:         int type = PLAYBACK_DBG_TYPE_C_ORIENT; 
   410:         fwrite(&type, sizeof(type), 1, inv_data_builder.file); 
   411:         fwrite(&orientation, sizeof(orientation), 1, inv_data_builder.file); 
   412:         fwrite(&sensitivity, sizeof(sensitivity), 1, inv_data_builder.file); 
   413:     } 
   414: #endif 
0x0800E270 B510      PUSH          {r4,lr}
0x0800E272 4603      MOV           r3,r0
0x0800E274 460C      MOV           r4,r1
   415:     set_sensor_orientation_and_scale(&sensors.compass, orientation, sensitivity); 
0x0800E276 4622      MOV           r2,r4
0x0800E278 4619      MOV           r1,r3
0x0800E27A 4802      LDR           r0,[pc,#8]  ; @0x0800E284
0x0800E27C F001FDC2  BL.W          set_sensor_orientation_and_scale (0x0800FE04)
   416: } 
0x0800E280 BD10      POP           {r4,pc}
0x0800E282 0000      DCW           0x0000
0x0800E284 0304      DCW           0x0304
0x0800E286 2000      DCW           0x2000
   260:     sensors.compass.sample_rate_us = sample_rate_us; 
0x0800E288 4909      LDR           r1,[pc,#36]  ; @0x0800E2B0
0x0800E28A F8C100B0  STR           r0,[r1,#0xB0]
   261:     sensors.compass.sample_rate_ms = sample_rate_us / 1000; 
0x0800E28E F44F717A  MOV           r1,#0x3E8
0x0800E292 FB90F2F1  SDIV          r2,r0,r1
0x0800E296 4906      LDR           r1,[pc,#24]  ; @0x0800E2B0
0x0800E298 F8C120B4  STR           r2,[r1,#0xB4]
   262:     if (sensors.compass.bandwidth == 0) { 
0x0800E29C F8D110C8  LDR           r1,[r1,#0xC8]
0x0800E2A0 B929      CBNZ          r1,0x0800E2AE
   263:         sensors.compass.bandwidth = (int)(1000000L / sample_rate_us); 
   264:     } 
0x0800E2A2 4904      LDR           r1,[pc,#16]  ; @0x0800E2B4
0x0800E2A4 FB91F2F0  SDIV          r2,r1,r0
0x0800E2A8 4901      LDR           r1,[pc,#4]  ; @0x0800E2B0
0x0800E2AA F8C120C8  STR           r2,[r1,#0xC8]
   265: } 
0x0800E2AE 4770      BX            lr
0x0800E2B0 027C      DCW           0x027C
0x0800E2B2 2000      DCW           0x2000
0x0800E2B4 4240      DCW           0x4240
0x0800E2B6 000F      DCW           0x000F
  1214: void inv_set_compass_soft_iron_input_data(const long *data)  { 
  1215:     int i; 
0x0800E2B8 B570      PUSH          {r4-r6,lr}
0x0800E2BA 4605      MOV           r5,r0
  1216:     for (i=0; i<3; i++)  { 
0x0800E2BC 2400      MOVS          r4,#0x00
0x0800E2BE E005      B             0x0800E2CC
  1217:         sensors.soft_iron.raw[i] = data[i]; 
  1218:     } 
0x0800E2C0 F8551024  LDR           r1,[r5,r4,LSL #2]
0x0800E2C4 480F      LDR           r0,[pc,#60]  ; @0x0800E304
0x0800E2C6 F8401024  STR           r1,[r0,r4,LSL #2]
  1216:     for (i=0; i<3; i++)  { 
  1217:         sensors.soft_iron.raw[i] = data[i]; 
  1218:     } 
0x0800E2CA 1C64      ADDS          r4,r4,#1
0x0800E2CC 2C03      CMP           r4,#0x03
0x0800E2CE DBF7      BLT           0x0800E2C0
  1219:     if (sensors.soft_iron.enable == 1)  { 
0x0800E2D0 480D      LDR           r0,[pc,#52]  ; @0x0800E308
0x0800E2D2 F8D00190  LDR           r0,[r0,#0x190]
0x0800E2D6 2801      CMP           r0,#0x01
0x0800E2D8 D107      BNE           0x0800E2EA
  1220:         mlMatrixVectorMult(sensors.soft_iron.matrix_d, data, sensors.soft_iron.trans); 
  1221:     } else { 
0x0800E2DA 4A0A      LDR           r2,[pc,#40]  ; @0x0800E304
0x0800E2DC 320C      ADDS          r2,r2,#0x0C
0x0800E2DE 4629      MOV           r1,r5
0x0800E2E0 F102000C  ADD           r0,r2,#0x0C
0x0800E2E4 F000FA42  BL.W          mlMatrixVectorMult (0x0800E76C)
0x0800E2E8 E00A      B             0x0800E300
  1222:         for (i=0; i<3; i++)  { 
0x0800E2EA 2400      MOVS          r4,#0x00
0x0800E2EC E006      B             0x0800E2FC
  1223:             sensors.soft_iron.trans[i] = data[i]; 
  1224:         } 
  1225:     } 
0x0800E2EE F8551024  LDR           r1,[r5,r4,LSL #2]
0x0800E2F2 4804      LDR           r0,[pc,#16]  ; @0x0800E304
0x0800E2F4 300C      ADDS          r0,r0,#0x0C
0x0800E2F6 F8401024  STR           r1,[r0,r4,LSL #2]
  1222:         for (i=0; i<3; i++)  { 
  1223:             sensors.soft_iron.trans[i] = data[i]; 
  1224:         } 
  1225:     } 
0x0800E2FA 1C64      ADDS          r4,r4,#1
0x0800E2FC 2C03      CMP           r4,#0x03
0x0800E2FE DBF6      BLT           0x0800E2EE
  1226: } 
0x0800E300 BD70      POP           {r4-r6,pc}
0x0800E302 0000      DCW           0x0000
0x0800E304 03AC      DCW           0x03AC
0x0800E306 2000      DCW           0x2000
0x0800E308 027C      DCW           0x027C
0x0800E30A 2000      DCW           0x2000
   366:     rh.compass_state = state; 
0x0800E30C 4901      LDR           r1,[pc,#4]  ; @0x0800E314
0x0800E30E 6788      STR           r0,[r1,#0x78]
   367: } 
0x0800E310 4770      BX            lr
0x0800E312 0000      DCW           0x0000
0x0800E314 04D8      DCW           0x04D8
0x0800E316 2000      DCW           0x2000
   971:     inv_time_t current_time = 0; 
0x0800E318 2000      MOVS          r0,#0x00
   972:     if (sensors.gyro.status & INV_NEW_DATA) { 
0x0800E31A 4946      LDR           r1,[pc,#280]  ; @0x0800E434
0x0800E31C F8911030  LDRB          r1,[r1,#0x30]
0x0800E320 F0010140  AND           r1,r1,#0x40
0x0800E324 B139      CBZ           r1,0x0800E336
   973:         sensors.gyro.status |= INV_CONTIGUOUS; 
0x0800E326 4943      LDR           r1,[pc,#268]  ; @0x0800E434
0x0800E328 6B09      LDR           r1,[r1,#0x30]
0x0800E32A F0410110  ORR           r1,r1,#0x10
0x0800E32E 4A41      LDR           r2,[pc,#260]  ; @0x0800E434
0x0800E330 6311      STR           r1,[r2,#0x30]
   974:         current_time = sensors.gyro.timestamp; 
   975:     } 
0x0800E332 4611      MOV           r1,r2
0x0800E334 6B88      LDR           r0,[r1,#0x38]
   976:     if (sensors.accel.status & INV_NEW_DATA) { 
0x0800E336 493F      LDR           r1,[pc,#252]  ; @0x0800E434
0x0800E338 F8911074  LDRB          r1,[r1,#0x74]
0x0800E33C F0010140  AND           r1,r1,#0x40
0x0800E340 B169      CBZ           r1,0x0800E35E
   977:         sensors.accel.status |= INV_CONTIGUOUS; 
0x0800E342 493C      LDR           r1,[pc,#240]  ; @0x0800E434
0x0800E344 6F49      LDR           r1,[r1,#0x74]
0x0800E346 F0410210  ORR           r2,r1,#0x10
0x0800E34A 493A      LDR           r1,[pc,#232]  ; @0x0800E434
0x0800E34C 674A      STR           r2,[r1,#0x74]
   978:         current_time = MAX(current_time, sensors.accel.timestamp); 
   979:     } 
0x0800E34E 6FC9      LDR           r1,[r1,#0x7C]
0x0800E350 4281      CMP           r1,r0
0x0800E352 D201      BCS           0x0800E358
0x0800E354 4601      MOV           r1,r0
0x0800E356 E001      B             0x0800E35C
0x0800E358 4936      LDR           r1,[pc,#216]  ; @0x0800E434
0x0800E35A 6FC9      LDR           r1,[r1,#0x7C]
0x0800E35C 4608      MOV           r0,r1
   980:     if (sensors.compass.status & INV_NEW_DATA) { 
0x0800E35E 4935      LDR           r1,[pc,#212]  ; @0x0800E434
0x0800E360 F89110B8  LDRB          r1,[r1,#0xB8]
0x0800E364 F0010140  AND           r1,r1,#0x40
0x0800E368 B189      CBZ           r1,0x0800E38E
   981:         sensors.compass.status |= INV_CONTIGUOUS; 
0x0800E36A 4932      LDR           r1,[pc,#200]  ; @0x0800E434
0x0800E36C F8D110B8  LDR           r1,[r1,#0xB8]
0x0800E370 F0410210  ORR           r2,r1,#0x10
0x0800E374 492F      LDR           r1,[pc,#188]  ; @0x0800E434
0x0800E376 F8C120B8  STR           r2,[r1,#0xB8]
   982:         current_time = MAX(current_time, sensors.compass.timestamp); 
   983:     } 
0x0800E37A F8D110C0  LDR           r1,[r1,#0xC0]
0x0800E37E 4281      CMP           r1,r0
0x0800E380 D201      BCS           0x0800E386
0x0800E382 4601      MOV           r1,r0
0x0800E384 E002      B             0x0800E38C
0x0800E386 492B      LDR           r1,[pc,#172]  ; @0x0800E434
0x0800E388 F8D110C0  LDR           r1,[r1,#0xC0]
0x0800E38C 4608      MOV           r0,r1
   984:     if (sensors.temp.status & INV_NEW_DATA) { 
0x0800E38E 4929      LDR           r1,[pc,#164]  ; @0x0800E434
0x0800E390 F89110FC  LDRB          r1,[r1,#0xFC]
0x0800E394 F0010140  AND           r1,r1,#0x40
0x0800E398 B189      CBZ           r1,0x0800E3BE
   985:         sensors.temp.status |= INV_CONTIGUOUS; 
0x0800E39A 4926      LDR           r1,[pc,#152]  ; @0x0800E434
0x0800E39C F8D110FC  LDR           r1,[r1,#0xFC]
0x0800E3A0 F0410210  ORR           r2,r1,#0x10
0x0800E3A4 4923      LDR           r1,[pc,#140]  ; @0x0800E434
0x0800E3A6 F8C120FC  STR           r2,[r1,#0xFC]
   986:         current_time = MAX(current_time, sensors.temp.timestamp); 
   987:     } 
0x0800E3AA F8D11104  LDR           r1,[r1,#0x104]
0x0800E3AE 4281      CMP           r1,r0
0x0800E3B0 D201      BCS           0x0800E3B6
0x0800E3B2 4601      MOV           r1,r0
0x0800E3B4 E002      B             0x0800E3BC
0x0800E3B6 491F      LDR           r1,[pc,#124]  ; @0x0800E434
0x0800E3B8 F8D11104  LDR           r1,[r1,#0x104]
0x0800E3BC 4608      MOV           r0,r1
   988:     if (sensors.quat.status & INV_NEW_DATA) { 
0x0800E3BE 491D      LDR           r1,[pc,#116]  ; @0x0800E434
0x0800E3C0 F8911120  LDRB          r1,[r1,#0x120]
0x0800E3C4 F0010140  AND           r1,r1,#0x40
0x0800E3C8 B189      CBZ           r1,0x0800E3EE
   989:         sensors.quat.status |= INV_CONTIGUOUS; 
0x0800E3CA 491A      LDR           r1,[pc,#104]  ; @0x0800E434
0x0800E3CC F8D11120  LDR           r1,[r1,#0x120]
0x0800E3D0 F0410210  ORR           r2,r1,#0x10
0x0800E3D4 4917      LDR           r1,[pc,#92]  ; @0x0800E434
0x0800E3D6 F8C12120  STR           r2,[r1,#0x120]
   990:         current_time = MAX(current_time, sensors.quat.timestamp); 
   991:     } 
   992:  
   993: #if 0 
   994:     /* See if sensors are still on. These should be turned off by inv_*_was_turned_off() 
   995:      * type functions. This is just in case that breaks down. We make sure 
   996:      * all the data is within 2 seconds of the newest piece of data*/ 
   997:     if (inv_delta_time_ms(current_time, sensors.gyro.timestamp) >= 2000) 
   998:         inv_gyro_was_turned_off(); 
   999:     if (inv_delta_time_ms(current_time, sensors.accel.timestamp) >= 2000) 
  1000:         inv_accel_was_turned_off(); 
  1001:     if (inv_delta_time_ms(current_time, sensors.compass.timestamp) >= 2000) 
  1002:         inv_compass_was_turned_off(); 
  1003:     /* TODO: Temperature might not need to be read this quickly. */ 
  1004:     if (inv_delta_time_ms(current_time, sensors.temp.timestamp) >= 2000) 
  1005:         inv_temperature_was_turned_off(); 
  1006: #endif 
  1007:  
  1008:     /* clear bits */ 
0x0800E3DA F8D11124  LDR           r1,[r1,#0x124]
0x0800E3DE 4281      CMP           r1,r0
0x0800E3E0 D201      BCS           0x0800E3E6
0x0800E3E2 4601      MOV           r1,r0
0x0800E3E4 E002      B             0x0800E3EC
0x0800E3E6 4913      LDR           r1,[pc,#76]  ; @0x0800E434
0x0800E3E8 F8D11124  LDR           r1,[r1,#0x124]


int inv_perform_9x_fusion()
{
  int result; // r0@2

  if ( s9axis.mode == 3 )
  {
    s9axis.mode = 2;
    result = __inv_perform_9x_fusion_1();
  }
  else
  {
    result = __inv_perform_9x_fusion_0( s9axis.mode,
               0,
               0,
               0,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19);
  }
  return result;
}

int __fastcall __inv_perform_9x_fusion_0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, char a13, int a14, int a15, int a16, int a17, int a18, char a19)
{
  return __inv_perform_9x_fusion_2(a2, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}

int __fastcall __inv_perform_9x_fusion_2(signed int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, char a13, int a14, int a15, int a16, int a17, int a18, char a19)
{
  int v19; // r4@0
  int v20; // r5@0
  int result; // r0@2
  unsigned int v26; // r1@3

  if ( a1 >= 4 )
  {
    inv_get_6axis_quaternion(&a19);
    inv_get_gravity(&a13);
    inv_find_synchronized_compass_angle(v19, &a19, &a13, v20 + 168);
    __asm { FCPYS   S16, S0 }
    v26 = (unsigned int)inv_get_gyro_sum_of_sqr(v19 + 24) >> 6;
    result = __inv_perform_9x_fusion_4();
  }
  else
  {
    result = __inv_perform_9x_fusion_3();
  }
  return result;
}

int __fastcall __inv_perform_9x_fusion_4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, char a19, int a20, int a21, int a22, char a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, char a35)
{
  int v35; // r4@0
  int v36; // r5@0
  int v42; // r0@1

  __asm { FCPYS   S0, S16 }
  inv_filter_correction_angle(v35);
  __asm
  {
    FSTS    S0, [R6,#0x10]
    FLDS    S1, [R6,#0x44]
    FMULS   S0, S0, S1
    FSTS    S0, [R6,#0x10]
  }
  inv_get_6axis_quaternion(&a23);
  inv_quaternion_to_rotation(&a23, &a35);
  inv_q_mult(v36 + 252, &a23, &a19);
  v42 = inv_q_invert(&a23, v36 + 252);
  return __inv_perform_9x_fusion_5(v42);
}



int __fastcall __inv_perform_9x_fusion_9(float a1, int a2, int a3, float a4, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, char a23, int a24, int a25, int a26, char a27, int a28, int a29, int a30, char a31)
{
  int v31; // r4@0
  int v32; // r5@0
  int v44; // r1@1
  int v45; // r2@1
  int v46; // r3@1
  int v47; // r0@1
  int result; // r0@2

  _R10 = *(_DWORD *)(_R9 + 8);
  __asm { FLDS    S16, =9.3132e-10 }
  _R0 = -_R10;
  __asm
  {
    FMSR    S0, R0
    FSITOS  S0, S0
    FMULS   S17, S0, S16
    FCPYS   S0, S17
  }
  cosf();
  __asm { FSTS    S0, [SP,#arg_10] }
  _R8 = &a9;
  a10 = 0;
  a11 = 0;
  __asm { FCPYS   S0, S17 }
  sinf();
  __asm { FSTS    S0, [R8,#0xC] }
  _R0 = *(_DWORD *)(v32 + 304) / 5000;
  __asm
  {
    FMSR    S0, R0
    FSITOS  S0, S0
    FMSR    S1, R10
    FSITOS  S1, S1
    FLDS    S2, =46851.0
    FDIVS   S1, S1, S2
    FDIVS   S1, S1, S0
  }
  __cdp(10, 11, 0x1388u, 0, 0, 0);
  __asm
  {
    FDIVS   S1, S1, S2
    FTOSIZS S1, S1
    FMRS    R0, S1
  }
  _R0 *= 2;
  __asm
  {
    FMSR    S1, R0
    FSITOS  S1, S1
    FLDS    S2, =46851.0
    FMULS   S1, S1, S2
    FMULS   S0, S1, S0
    FTOSIZS S0, S0
    FSTS    S0, [R9,#8]
    FSITOS  S0, S0
    FMULS   S17, S0, S16
    FCPYS   S0, S17
  }
  cosf();
  __asm { FSTS    S0, [SP,#arg_0] }
  _R9 = &a5;
  a6 = 0;
  a7 = 0;
  __asm { FCPYS   S0, S17 }
  sinf();
  __asm { FSTS    S0, [R9,#arg_C] }
  inv_q_multf(&a31, &a9, &a27);
  inv_q_multf(&a27, &a5, &a9);
  v47 = *(_DWORD *)(v31 + 188);
  if ( v47 >= 1 )
    result = __inv_perform_9x_fusion_11(v47, v44, 0);
  else
    result = __inv_perform_9x_fusion_10(v47, v44, v45, v46, LODWORD(a5), a6, a7);
  return result;
}