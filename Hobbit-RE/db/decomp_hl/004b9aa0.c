
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b9aa0(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [20];
  
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  piVar1 = param_1;
  FUN_00413480(0x20,0x20,0x20,0xff);
  FUN_004c08b0(param_2,param_3,param_4,param_5,piVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  param_1[8] = *param_2;
  param_1[9] = param_2[1];
  param_1[10] = param_2[2];
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 300))(param_2);
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  FUN_004b9dd0();
  param_1[0x60] = param_1[5];
  param_1[0x61] = param_1[6];
  param_1[0x62] = param_1[7];
  param_1[99] = param_1[5];
  param_1[100] = param_1[6];
  param_1[0x65] = param_1[7];
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0x98] = param_1[0x98] & 0xffffffdd;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  FUN_004ab480(0);
  FUN_0064c8e0((float)param_1[0x1c] * _DAT_006e936c,&param_4,&param_3);
  iStack_1c = param_4;
  iStack_18 = param_3;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar2 = FUN_00463b80(auStack_14,&uStack_24,&stack0xffffffcc);
  FUN_0042fda0(uVar2);
  FUN_0064c8e0((float)param_1[0x1a] * _DAT_006e936c,&param_3,&param_4);
  CRect::CRect((CRect *)&uStack_24,param_3,0,0,param_4);
  uVar2 = FUN_00463b80(auStack_14,&uStack_24,&stack0xffffffcc);
  FUN_0042fda0(uVar2);
  FUN_0064c8e0((float)param_1[0x1b] * _DAT_006e936c,&param_3,&param_4);
  CRect::CRect((CRect *)&uStack_24,0,param_3,0,param_4);
  uVar2 = FUN_00463b80(auStack_14,&uStack_24,&stack0xffffffcc);
  FUN_0042fda0(uVar2);
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8b] = 0x3f800000;
  FUN_004baec0();
  return;
}

