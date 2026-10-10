
void __thiscall
FUN_006729f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,int param_8)

{
  undefined4 *puVar1;
  
  FUN_00674180();
  puVar1 = (undefined4 *)(param_1 + 0x254);
  if (param_8 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x2b4);
  }
  *param_4 = *puVar1;
  param_4[1] = puVar1[1];
  param_4[2] = puVar1[2];
  param_4[3] = puVar1[3];
  *param_5 = puVar1[4];
  param_5[1] = puVar1[5];
  param_5[2] = puVar1[6];
  param_5[3] = puVar1[7];
  *param_3 = puVar1[8];
  param_3[1] = puVar1[9];
  param_3[2] = puVar1[10];
  param_3[3] = puVar1[0xb];
  *param_2 = puVar1[0xc];
  param_2[1] = puVar1[0xd];
  param_2[2] = puVar1[0xe];
  param_2[3] = puVar1[0xf];
  *param_6 = puVar1[0x10];
  param_6[1] = puVar1[0x11];
  param_6[2] = puVar1[0x12];
  param_6[3] = puVar1[0x13];
  *param_7 = puVar1[0x14];
  param_7[1] = puVar1[0x15];
  param_7[2] = puVar1[0x16];
  param_7[3] = puVar1[0x17];
  return;
}

