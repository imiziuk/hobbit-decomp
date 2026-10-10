
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f3ac0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [52];
  
  local_61 = 0xff;
  local_62 = 0;
  local_63 = 0;
  local_64 = 0;
  local_5d = 0xff;
  local_5e = 0xff;
  local_5f = 0xff;
  local_60 = 0xff;
  local_48 = 0;
  local_50 = *(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x560) / _DAT_006efa3c;
  local_58 = _DAT_0075e360 * *(float *)(param_1 + 0x570);
  local_54 = _DAT_0075e364 * *(float *)(param_1 + 0x570);
  local_4c = _DAT_006efa44 + local_54 + *(float *)(param_1 + 0x564) / _DAT_006efa40;
  FUN_004fa450(&local_58);
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(&DAT_00763460,0);
  FUN_0066e5a0(&local_50,&local_58,0xffffffff);
  FUN_0066d9a0();
  FUN_00434ca0(0x30);
  uVar1 = __ftol();
  FUN_0064f190(local_34,&DAT_0072f8e8,uVar1);
  local_5c = local_58 * _DAT_006e936c + local_50;
  iVar2 = __ftol();
  iVar3 = __ftol();
  iVar4 = __ftol();
  local_38 = __ftol();
  local_44 = iVar2 + 1;
  local_3c = iVar4 + 1;
  puVar8 = local_34;
  local_40 = iVar3 + -1;
  local_38 = local_38 + -1;
  puVar7 = &local_64;
  uVar6 = 0x12;
  piVar5 = &local_44;
  uVar1 = FUN_0069fa60(s_small_0072f8e0);
  FUN_0069fac0(uVar1,piVar5,uVar6,puVar7,puVar8);
  local_44 = local_44 + -1;
  local_3c = local_3c + -1;
  local_40 = local_40 + -1;
  local_38 = local_38 + -1;
  puVar8 = local_34;
  puVar7 = &local_60;
  uVar6 = 0x12;
  piVar5 = &local_44;
  uVar1 = FUN_0069fa60(s_small_0072f8e0);
  FUN_0069fac0(uVar1,piVar5,uVar6,puVar7,puVar8);
  return;
}

