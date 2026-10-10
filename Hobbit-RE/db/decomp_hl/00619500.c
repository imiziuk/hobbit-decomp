
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00619500(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined8 uVar10;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  iVar7 = 0;
  do {
    piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      fVar1 = *(float *)(iVar4 + 4);
      if (iVar7 == 0) {
        piVar3 = (int *)FUN_0041bcc0();
        fVar2 = -_DAT_006f5acc;
        pfVar5 = (float *)(**(code **)(*piVar3 + 0x28))();
        fVar8 = (float10)FUN_00647b30(fVar2,fVar2);
        fVar8 = fVar8 + (float10)*pfVar5;
        piVar3 = (int *)FUN_0041bcc0();
        fVar2 = -_DAT_006f5acc;
        iVar4 = (**(code **)(*piVar3 + 0x28))();
        fVar9 = (float10)FUN_00647b30(fVar2,fVar2);
        fVar9 = fVar9 + (float10)*(float *)(iVar4 + 8);
      }
      else {
        puVar6 = (undefined4 *)FUN_005c0150();
        uStack_18 = *puVar6;
        uStack_10 = puVar6[2];
        uStack_c = puVar6[3];
        uStack_4 = puVar6[5];
        fVar8 = (float10)FUN_00647b30(uStack_18,uStack_c);
        fVar9 = (float10)FUN_00647b30(uStack_10,uStack_4);
      }
      fStack_30 = (float)fVar8;
      fStack_1c = (float)fVar9;
      fStack_24 = fStack_30;
      fVar8 = (float10)FUN_00647b30(0x41200000,0x42480000);
      fStack_20 = (float)((float10)fVar1 - fVar8);
      FUN_004357e0(&fStack_24);
      FUN_005af120();
      uVar10 = FUN_00425510();
      FUN_004b53a0(0x10,uVar10);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  return;
}

