
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f8c10(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uStack_3b;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_38 = *(float *)(param_1 + 0x570) * _DAT_006efa9c;
  fVar1 = local_38 * _DAT_006e936c;
  local_34 = local_38;
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0x334,0);
  uVar5 = 0xffffffff;
  pfVar3 = &local_38;
  uVar2 = FUN_00401f00(*(float *)(param_1 + 0x560) * _DAT_006e936c - fVar1,
                       *(float *)(param_1 + 0x564) * _DAT_006e936c - fVar1,0);
  FUN_0066e5a0(uVar2,pfVar3,uVar5);
  FUN_0066d9a0();
  uStack_3b = 0xff;
  if (*(int *)(param_1 + 0xc) == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xff;
    if (*(int *)(param_1 + 0xc) != 2) {
      uStack_3b = 0;
    }
  }
  FUN_0065fd00(0);
  pfVar3 = (float *)FUN_00672330(local_18);
  local_30 = *pfVar3 * _DAT_006e9364;
  local_2c = pfVar3[1] * _DAT_006e9364;
  local_28 = pfVar3[2] * _DAT_006e9364;
  pfVar3 = (float *)FUN_00672260(local_c);
  local_1c = local_28 + pfVar3[2];
  local_20 = local_2c + pfVar3[1];
  local_24 = local_30 + *pfVar3;
  FUN_0066a810(&local_24,(uint)CONCAT21(CONCAT11(0xff,uVar4),uStack_3b) << 8);
  return;
}

