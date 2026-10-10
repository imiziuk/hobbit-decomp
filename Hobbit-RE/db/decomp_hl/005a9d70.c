
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005a9d70(uint *param_1,uint *param_2,byte *param_3,float param_4,uint *param_5,uint *param_6)

{
  float fVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  
  if (param_5 == (uint *)0x0) {
    uVar2 = FUN_005496c0(s_BWispInner_xbmp_00744887 + 1,s_Ambient_00729b04);
    FUN_00549430(param_1,uVar2);
  }
  else {
    uVar4 = *param_1 & 0x7fffffff;
    *param_1 = uVar4;
    *param_1 = (*param_5 ^ uVar4) & 0x7fffffff ^ uVar4;
    FUN_005492b0(param_1,0);
    if ((int)*param_5 < 0) {
      FUN_00549470(param_1);
    }
    uVar2 = FUN_00549620(param_5);
    FUN_00549670(param_1,uVar2);
  }
  if (param_6 == (uint *)0x0) {
    uVar2 = FUN_005496c0(s_WispOuter_xbmp_0072b71c,s_Ambient_00729b04);
    FUN_00549430(param_1 + 1,uVar2);
  }
  else {
    puVar3 = param_1 + 1;
    uVar4 = param_1[1] & 0x7fffffff;
    *puVar3 = uVar4;
    *puVar3 = (*param_6 ^ uVar4) & 0x7fffffff ^ uVar4;
    FUN_005492b0(puVar3,0);
    if ((int)*param_6 < 0) {
      FUN_00549470(puVar3);
    }
    uVar2 = FUN_00549620(param_6);
    FUN_00549670(puVar3,uVar2);
  }
  FUN_00608a70(5,0);
  FUN_00608a70(10,0);
  FUN_00608bb0(param_4);
  FUN_00608bb0(param_4 * _DAT_006e99a4);
  if (param_1[0x1a3] != 0) {
    FUN_00608a70(0x20,0);
    FUN_00608bb0(0x41700000);
  }
  param_5 = (uint *)0x0;
  do {
    FUN_00608bc0(param_5,param_2);
    FUN_00608c20(param_1 + 1);
    param_5 = (uint *)((int)param_5 + 1);
  } while ((int)param_5 < 5);
  iVar5 = 0;
  do {
    FUN_00608bc0(iVar5,param_2);
    FUN_00608c20(param_1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  if (param_1[0x1a3] != 0) {
    iVar5 = 0;
    do {
      FUN_00608bc0(iVar5,param_2);
      FUN_00608c20(param_1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
  }
  puVar3 = param_1 + 0x4d;
  iVar5 = 0x20;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 9;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  param_1[7] = param_2[2];
  fVar7 = (float10)FUN_00647b30(0,0x40a00000);
  param_1[0x19f] = (uint)(float)fVar7;
  fVar1 = param_4 * _DAT_006e95a8;
  *(byte *)(param_1 + 0x1a0) = (byte)param_1[0x1a0] & 0xf9;
  param_1[0x19d] = (uint)fVar1;
  param_1[0x1a2] = 0x3f19999a;
  fVar1 = param_4 * _DAT_006edbfc;
  param_1[0x1a1] = 0x3f19999a;
  pfVar6 = (float *)(param_1 + 0x18);
  iVar5 = 0x2f;
  param_1[0x19e] = (uint)fVar1;
  do {
    fVar7 = (float10)FUN_00647b30(0xc0a00000,0x40a00000);
    *pfVar6 = (float)fVar7;
    pfVar6 = pfVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(byte *)((int)param_1 + 0x53) = param_3[3];
  *(byte *)((int)param_1 + 0x52) = param_3[2];
  *(byte *)((int)param_1 + 0x51) = param_3[1];
  *(byte *)(param_1 + 0x14) = *param_3;
  param_1[8] = (uint)(float)param_3[2];
  param_1[9] = (uint)(float)param_3[1];
  param_1[10] = (uint)(float)*param_3;
  param_1[0xb] = (uint)(float)param_3[3];
  param_1[0xc] = param_1[8];
  param_1[0xd] = param_1[9];
  param_1[0xe] = param_1[10];
  param_1[0xf] = param_1[0xb];
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = (uint)param_4;
  param_1[0x17] = (uint)param_4;
  return;
}

