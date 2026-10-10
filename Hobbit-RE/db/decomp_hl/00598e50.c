
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00598e50(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd4c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__DoNSGroundHug_0074323c);
  local_4 = 0;
  piVar4 = (int *)FUN_00592920();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
  uStack_3c = *puVar5;
  fStack_38 = (float)puVar5[1];
  uStack_34 = puVar5[2];
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x268);
  iVar6 = FUN_00592920();
  if (*(int *)(iVar6 + 0x1b0) != 0x24) {
    iVar6 = FUN_00592920();
    if (*(int *)(iVar6 + 0x1b0) != 0x25) {
      piVar4 = (int *)FUN_00592920();
      pfVar1 = (float *)(param_1 + 0x2d8);
      iVar6 = (**(code **)(*piVar4 + 0x140))(&uStack_3c,0,&uStack_30,pfVar1);
      if (iVar6 != 0) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
      }
      *(undefined4 *)(param_1 + 0x2f0) = uStack_28;
      *(undefined4 *)(param_1 + 0x2e8) = uStack_30;
      *(float *)(param_1 + 0x2ec) = fStack_2c;
      iVar6 = FUN_00598bc0();
      if ((iVar6 != 0) && (fVar3 = fStack_38 - fStack_2c, **(float **)(param_1 + 0x34) <= fVar3)) {
        FUN_00592920();
        iVar6 = FUN_00467e90();
        if (iVar6 == 0) {
          FUN_00592660(6);
          if (_DAT_006e99c0 < fVar3) {
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x8000;
          }
          goto LAB_005991d5;
        }
      }
      fVar3 = *(float *)(param_1 + 0x294);
      pfVar2 = (float *)(param_1 + 0x21c);
      *pfVar2 = fVar3 * *(float *)(param_1 + 0x240) + *pfVar2;
      *(float *)(param_1 + 0x220) =
           fVar3 * *(float *)(param_1 + 0x244) + *(float *)(param_1 + 0x220);
      *(float *)(param_1 + 0x224) =
           fVar3 * *(float *)(param_1 + 0x248) + *(float *)(param_1 + 0x224);
      fVar3 = *pfVar1 * *pfVar2 +
              *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x2dc) +
              *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x2e0);
      FUN_00401f00(fVar3 * *pfVar1,fVar3 * *(float *)(param_1 + 0x2dc),
                   fVar3 * *(float *)(param_1 + 0x2e0));
      FUN_004357e0(auStack_24);
      uVar7 = FUN_00405080(auStack_24,pfVar2,auStack_18);
      FUN_004357e0(uVar7);
      fVar3 = DAT_006e92e8 /
              SQRT(fStack_48 * fStack_48 + fStack_40 * fStack_40 + fStack_44 * fStack_44);
      iVar6 = FUN_0064cf30(fVar3);
      if (iVar6 == 0) {
        fStack_48 = 0.0;
        fStack_44 = 0.0;
        fStack_40 = 0.0;
      }
      else {
        fStack_48 = fStack_48 * fVar3;
        fStack_44 = fStack_44 * fVar3;
        fStack_40 = fStack_40 * fVar3;
      }
      fVar3 = SQRT(*(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x224) +
                   *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x220) + *pfVar2 * *pfVar2);
      *pfVar2 = fVar3 * fStack_48;
      *(float *)(param_1 + 0x220) = fStack_44 * fVar3;
      *(float *)(param_1 + 0x224) = fStack_40 * fVar3;
      piVar4 = (int *)FUN_00592920();
      iVar6 = (**(code **)(*piVar4 + 0x28))();
      fStack_2c = *(float *)(iVar6 + 4) - fStack_2c;
      if (fStack_2c <= _DAT_006e958c) {
        if (fStack_2c < DAT_006e92e8 != (NAN(fStack_2c) || NAN(DAT_006e92e8))) {
          fStack_2c = DAT_006e92e8 - fStack_2c;
          goto LAB_00599134;
        }
      }
      else {
        fStack_2c = (_DAT_006e958c - fStack_2c) + *(float *)(param_1 + 0x220);
LAB_00599134:
        *(float *)(param_1 + 0x220) = fStack_2c;
      }
      iVar6 = FUN_00592920();
      if ((*(float *)(param_1 + 0x2dc) < *(float *)(iVar6 + 0xd4) !=
           (NAN(*(float *)(param_1 + 0x2dc)) || NAN(*(float *)(iVar6 + 0xd4)))) &&
         (*(int *)(param_1 + 0x40) != 2)) {
        *(float *)(param_1 + 0x220) = -*(float *)(*(int *)(param_1 + 0x34) + 0xc);
      }
      goto LAB_005991d5;
    }
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
  *(float *)(param_1 + 0x220) = fStack_38;
  *(undefined4 *)(param_1 + 0x224) = uStack_34;
  *(undefined4 *)(param_1 + 0x21c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_3c;
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x224);
  if (*(int *)(param_1 + 0x38) != 2) {
    *(undefined4 *)(param_1 + 0x38) = 4;
    FUN_00595ad0();
  }
LAB_005991d5:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

