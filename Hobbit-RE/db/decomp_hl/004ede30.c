
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ede30(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_34 = *(float *)(param_1 + 0x234) / *(float *)(param_1 + 0x230);
  if (DAT_006e92e8 < local_34) {
    local_34 = 1.0;
  }
  FUN_0065fce0(0);
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 1.0;
  FUN_006727a0(&local_c,&local_18);
  local_30 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x248);
  pfVar1 = (float *)(param_1 + 0x248);
  local_2c = *(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x24c);
  local_28 = *(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x250);
  local_38 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  local_34 = local_34 * local_38;
  local_38 = DAT_006e92e8 / local_38;
  iVar3 = FUN_0064cf30(local_38);
  if (iVar3 == 0) {
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
  }
  else {
    local_30 = local_38 * local_30;
    local_2c = local_2c * local_38;
    local_28 = local_28 * local_38;
  }
  FUN_00401f00(local_2c * local_4 - local_28 * local_8,local_28 * local_c - local_4 * local_30,
               local_8 * local_30 - local_2c * local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  local_38 = DAT_006e92e8 / SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  iVar3 = FUN_0064cf30(local_38);
  if (iVar3 == 0) {
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
  }
  else {
    local_24 = local_24 * local_38;
    local_20 = local_20 * local_38;
    local_1c = local_1c * local_38;
  }
  local_38 = local_34 * _DAT_006e95a8;
  local_39 = 200;
  local_3a = 0xff;
  local_3b = 0xff;
  local_3c = 0xff;
  local_30 = local_30 * local_34 + *pfVar1;
  local_2c = local_2c * local_34 + *(float *)(param_1 + 0x24c);
  local_28 = local_28 * local_34 + *(float *)(param_1 + 0x250);
  FUN_0066c3a0(5,0x200006a6);
  iVar3 = FUN_00549470(param_1 + 0x270);
  if (iVar3 == 0) {
    FUN_0066d9a0();
    return;
  }
  FUN_0066db80(iVar3,0);
  FUN_00549580(param_1 + 0x270);
  FUN_0066dac0();
  FUN_0066ddd0(0xffffffff);
  FUN_0066dd10(0,0);
  FUN_00401f00(*pfVar1 - local_24,*(float *)(param_1 + 0x24c) - local_20,
               *(float *)(param_1 + 0x250) - local_1c);
  FUN_0066de80(&local_18);
  FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(local_39,local_3a),local_3b),local_3c));
  fVar2 = local_38;
  FUN_0066dd10(0,local_38);
  FUN_00401f00(local_30 - local_24,local_2c - local_20,local_28 - local_1c);
  FUN_0066de80(&local_18);
  FUN_0066dd10(0x3f800000,fVar2);
  FUN_0066de80(&local_30);
  FUN_0066ddd0(0xffffffff);
  FUN_0066dd10(0x3f800000,0);
  FUN_0066de80(pfVar1);
  FUN_0066dd10(0,0);
  uVar4 = FUN_00402130(&local_18,pfVar1,&local_24);
  FUN_0066de80(uVar4);
  FUN_00425250(&local_3c);
  FUN_0066ddd0();
  FUN_0066dd10(0,fVar2);
  uVar4 = FUN_00402130(&local_18,&local_30,&local_24);
  FUN_0066de80(uVar4);
  FUN_0066dd10(0x3f800000,fVar2);
  FUN_0066de80(&local_30);
  FUN_00406b70(0xffffffff);
  FUN_0066ddd0();
  FUN_0066dd10(0x3f800000,0);
  FUN_0066de80(pfVar1);
  FUN_0066d9a0();
  return;
}

