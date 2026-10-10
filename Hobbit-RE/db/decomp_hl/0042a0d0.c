
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a0d0(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = param_1 + 0x454;
  if (*(int *)(param_1 + 0x3d0) == 0) {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = FUN_0053cc70(s_STING_BLOCK_007205f0);
    FUN_00540840(uVar3,uVar4,uVar5,uVar6);
    local_18 = *(float *)(*(int *)(param_1 + 0x450) + 0x168);
  }
  else {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = FUN_0053cc70(s_STAFF_BLOCK_007205fc);
    FUN_00540840(uVar3,uVar4,uVar5,uVar6);
    local_18 = *(float *)(*(int *)(param_1 + 0x450) + 0x168) * _DAT_006e9550;
  }
  FUN_0064c8e0(*(float *)(param_1 + 0x474) + _DAT_006e9368,&local_10,&local_14);
  local_c = (local_14 * DAT_006e92e4 + local_10) * local_18;
  local_8 = local_18 * DAT_006e92e4;
  local_4 = (local_14 - local_10 * DAT_006e92e4) * local_18;
  FUN_00442560(&local_c,*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x16c));
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
  FUN_004300c0();
  if ((*(float *)(param_1 + 0xa04) < _DAT_006e9554 !=
       (NAN(*(float *)(param_1 + 0xa04)) || NAN(_DAT_006e9554))) &&
     (fVar2 = *(float *)(param_1 + 0xa04) + DAT_006e92e8, *(float *)(param_1 + 0xa04) = fVar2,
     _DAT_006e9554 < fVar2)) {
    *(undefined4 *)(param_1 + 0xa04) = 0x41200000;
  }
  return;
}

