
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f4e90(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar5 = 0xff;
  if (-1 < *(int *)(param_1 + 0x178)) {
    iVar2 = FUN_0054ec80();
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x184) == 0) {
        *(undefined4 *)(param_1 + 0x188) = 1;
      }
      else {
        *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) ^ 1;
      }
      if (*(int *)(param_1 + 0x188) == 0) {
        uVar5 = 0x80;
      }
      FUN_0066c3a0(7,0x17);
      FUN_0066db80(param_1 + 0x74,0);
      uVar3 = FUN_0041b9c0((float)_DAT_0072f3d8,(float)_DAT_0072f3dc);
      uVar8 = 0;
      iVar2 = FUN_004f8d90(DAT_0072f3d4);
      fVar6 = (float)iVar2;
      iVar2 = FUN_004f8d60(DAT_0072f3d0);
      uVar8 = FUN_00401f00((float)iVar2,fVar6,uVar8);
      FUN_0066e5a0(uVar8,uVar3);
      FUN_0066d9a0();
      FUN_0066c3a0(7,0x17);
      FUN_0066db80(param_1 + 0x54,0);
      uVar9 = CONCAT31((int3)(CONCAT22((short)(CONCAT13(uVar5,0xff0000) >> 0x10),0xff00) >> 8),0xff)
      ;
      fVar6 = (float)*(int *)(param_1 + 0x178) * _DAT_006e9360;
      fVar1 = (float)_DAT_0072f3dc;
      uVar3 = FUN_0041b9c0(0x3f800000,0x3f800000);
      uVar8 = FUN_0041b9c0(0,DAT_006e92e8 - fVar6);
      uVar4 = FUN_0041b9c0((float)_DAT_0072f3d8,fVar6 * fVar1);
      uVar7 = 0;
      uVar3 = __ftol(0,uVar4,uVar8,uVar3,uVar9);
      iVar2 = FUN_004f8d90(uVar3);
      fVar6 = (float)iVar2;
      iVar2 = FUN_004f8d60(DAT_0072f3d0);
      uVar3 = FUN_00401f00((float)iVar2,fVar6,uVar7);
      FUN_0066e6b0(uVar3);
      FUN_0066d9a0();
      return;
    }
  }
  return;
}

