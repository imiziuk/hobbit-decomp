
void __thiscall FUN_004edc30(int param_1,undefined1 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0066c3a0(3,0x200006a6);
  iVar5 = FUN_00549470(param_1 + 0x274);
  if (iVar5 != 0) {
    FUN_0066db80(iVar5,0);
    FUN_00549580(param_1 + 0x274);
    FUN_0066ddd0(CONCAT31((int3)(CONCAT22((short)(CONCAT13(param_2,0xff0000) >> 0x10),0xff00) >> 8),
                          0xff));
    FUN_0066dac0();
    local_c = *(float *)(param_1 + 0x248) - *(float *)(param_1 + 0x1d8);
    pfVar1 = (float *)(param_1 + 0x1d8);
    local_8 = *(float *)(param_1 + 0x24c) - *(float *)(param_1 + 0x1dc);
    local_4 = *(float *)(param_1 + 0x250) - *(float *)(param_1 + 0x1e0);
    fVar3 = DAT_006e92e8 / SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4);
    iVar5 = FUN_0064cf30(fVar3);
    if (iVar5 == 0) {
      local_4 = 0.0;
      fVar4 = DAT_006e92e4;
      fVar3 = DAT_006e92e4;
    }
    else {
      local_4 = local_4 * fVar3;
      fVar4 = local_c * fVar3;
      fVar3 = local_8 * fVar3;
    }
    fVar2 = *(float *)(param_1 + 0x1c8);
    iVar5 = param_1 + 0x168;
    iVar7 = 8;
    local_c = fVar2 * fVar4 + *pfVar1;
    local_8 = fVar3 * fVar2 + *(float *)(param_1 + 0x1dc);
    local_4 = local_4 * fVar2 + *(float *)(param_1 + 0x1e0);
    do {
      FUN_0066dd10(0x3f800000,0x3f800000);
      FUN_0066de80(iVar5);
      FUN_0066dd10(0,0x3f800000);
      FUN_0066de80(pfVar1);
      FUN_0066dd10(0,0);
      FUN_0066de80(&local_c);
      iVar5 = iVar5 + 0xc;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar8 = 0;
    iVar5 = param_1 + 0x168;
    do {
      FUN_0066dd10(0x3f800000,0);
      FUN_0066de80(pfVar1);
      FUN_0066dd10(0x3d4ccccd,0);
      FUN_0066de80(iVar5);
      FUN_0066dd10(0x3f800000,0x3f733333);
      uVar8 = uVar8 + 1;
      uVar6 = uVar8 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      FUN_0066de80(param_1 + (uVar6 + 0x1e) * 0xc);
      iVar5 = iVar5 + 0xc;
    } while ((int)uVar8 < 8);
  }
  FUN_0066d9a0();
  return;
}

