
void __fastcall FUN_0061d440(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e4818;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_005af120();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  piVar4 = (int *)FUN_0041bcc0();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  fVar1 = SQRT((pfVar5[2] - fVar3) * (pfVar5[2] - fVar3) +
               (pfVar5[1] - fVar2) * (pfVar5[1] - fVar2) + (*pfVar5 - fVar1) * (*pfVar5 - fVar1));
  if (fVar1 < *(float *)(param_1 + 0x78) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0x78)))) {
    if (*(short *)(param_1 + 0x42) == 8) {
      FUN_005af120();
      lVar8 = FUN_00467700();
      if (lVar8 != 0) {
        *(int *)(param_1 + 0x70) = (int)*(short *)(param_1 + 0x42);
        uVar6 = FUN_005af960();
        *(undefined4 *)(param_1 + 0x74) = uVar6;
      }
      if ((((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) &&
          (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x50))) &&
         (iVar7 = FUN_005af220(), iVar7 != 0)) {
        FUN_005ac560();
        uStack_4 = 0;
        FUN_0064a320();
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
        iVar7 = FUN_005af160();
        if ((iVar7 != 0) && (iVar7 = FUN_005af160(), iVar7 != 0)) {
          FUN_00649b60(&DAT_007cc714);
          FUN_005bed00();
        }
      }
    }
    else {
      FUN_00631d00();
    }
  }
  FUN_005be370();
  ExceptionList = pvStack_c;
  return;
}

