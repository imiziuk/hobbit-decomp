
void __fastcall FUN_00458600(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar2 = *(float *)(param_1 + 0xac);
  pfVar1 = (float *)(param_1 + 0x14);
  FUN_00401f00(*pfVar1 - fVar2,*(float *)(param_1 + 0x18) - fVar2,*(float *)(param_1 + 0x1c) - fVar2
              );
  local_10 = local_34;
  local_18 = local_3c;
  local_14 = local_38;
  uVar3 = FUN_00401f00(fVar2,fVar2,fVar2);
  uVar3 = FUN_00402130(local_24,pfVar1,uVar3);
  FUN_004357e0(uVar3);
  *(undefined4 *)(param_1 + 0x44) = local_18;
  *(undefined4 *)(param_1 + 0x48) = local_14;
  *(undefined4 *)(param_1 + 0x4c) = local_10;
  *(undefined4 *)(param_1 + 0x50) = local_c;
  *(undefined4 *)(param_1 + 0x54) = local_8;
  *(undefined4 *)(param_1 + 0x58) = local_4;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x58);
  *(float *)(param_1 + 0x2c) = -*pfVar1 + *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x30) = -*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = -*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = -*pfVar1 + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = -*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x40) = -*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x40);
  return;
}

