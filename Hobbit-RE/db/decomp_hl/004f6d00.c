
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f6d00(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  float local_58;
  float local_54;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [52];
  
  local_58 = _DAT_0075f80c * *(float *)(param_1 + 0x570);
  local_54 = _DAT_0075f810 * *(float *)(param_1 + 0x570);
  FUN_0066c3a0(7,0x37);
  FUN_0066db80(param_1 + 0x454,0);
  uVar5 = 0xffffffff;
  pfVar6 = &local_58;
  uVar1 = FUN_00401f00(*param_2,param_2[1],0);
  FUN_0066e5a0(uVar1,pfVar6,uVar5);
  FUN_0066d9a0();
  FUN_0064f190(local_34,&DAT_0072f910,param_3);
  iVar2 = __ftol();
  iVar3 = __ftol();
  local_3c = __ftol();
  local_38 = __ftol();
  local_44 = iVar2 + 1;
  local_3c = local_3c + 1;
  local_40 = iVar3 + -1;
  local_38 = local_38 + -1;
  puVar8 = local_34;
  puVar7 = &param_2;
  param_2 = (undefined4 *)0xff000000;
  uVar5 = 0x14;
  piVar4 = &local_44;
  uVar1 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fac0(uVar1,piVar4,uVar5,puVar7,puVar8);
  local_44 = local_44 + -1;
  local_3c = local_3c + -1;
  local_40 = local_40 + -1;
  local_38 = local_38 + -1;
  puVar8 = local_34;
  puVar7 = &param_2;
  uVar5 = 0x14;
  piVar4 = &local_44;
  param_2 = (undefined4 *)0xffffffff;
  uVar1 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fac0(uVar1,piVar4,uVar5,puVar7,puVar8);
  return;
}

