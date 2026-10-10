
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004d3f30(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_4;
  
  uVar10 = 0;
  uVar9 = 1;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  local_4 = 0xff282828;
  piVar3 = param_1;
  FUN_00425250(&local_4);
  FUN_004c08b0(param_2,param_3,param_4,param_5,piVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
  iVar1 = *param_1;
  uVar4 = FUN_005496c0(s_chest_wood_rgeom_0072d9a0,s_Props_00720224);
  (**(code **)(iVar1 + 0xd0))(uVar4);
  param_1[0x62] = param_3;
  param_1[99] = param_3;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5f] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x92] = 0x42480000;
  param_1[0x93] = 0x43960000;
  param_1[0x94] = 0x43960000;
  param_1[0x98] = 0;
  param_1[0x7e] = 0;
  param_1[0x95] = param_1[5];
  param_1[0x96] = param_1[6];
  param_1[0x97] = param_1[7];
  fVar2 = (float)param_1[0x96] - _DAT_006e9988;
  *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xf7;
  param_1[0x96] = (int)fVar2;
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  return;
}

