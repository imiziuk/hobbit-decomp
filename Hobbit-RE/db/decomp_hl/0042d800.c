
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042d800(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [32];
  float local_10;
  undefined1 local_c [12];
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x804) = 0;
  local_44 = *(float *)(*(int *)(param_1 + 0x450) + 0x108);
  local_40 = -1;
  if (0 < *(int *)(param_1 + 0x3a08)) {
    pfVar6 = (float *)(param_1 + 0x161c);
    do {
      FUN_00401f00(*param_2 - pfVar6[-1],param_2[1] - *pfVar6,param_2[2] - pfVar6[1]);
      FUN_00405080(local_30,pfVar6 + 2,pfVar6 + -1);
      fVar7 = (float10)FUN_00402020(local_30);
      if ((float10)_DAT_006e92f8 < fVar7) {
        fVar8 = (float10)FUN_00402020(local_30);
        if ((float10)(float)fVar7 < fVar8) {
          puVar4 = (undefined1 *)
                   FUN_0042eea0(local_c,(float)((float10)(float)fVar7 / fVar8),local_30);
        }
        else {
          puVar4 = local_30;
        }
        FUN_0042ebf0(puVar4);
      }
      FUN_0042ebd0(&local_3c);
      fVar1 = param_2[1];
      local_10 = local_34 + param_2[2];
      pfVar6[0xf] = local_3c + *param_2;
      pfVar6[0x11] = local_10;
      pfVar6[0x10] = local_38 + fVar1;
      fVar1 = SQRT(local_3c * local_3c + local_34 * local_34 + local_38 * local_38);
      pfVar6[0x12] = fVar1;
      if (fVar1 < local_44 != (fVar1 == local_44)) {
        local_44 = fVar1;
        local_40 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x3a08));
    if (local_40 != -1) {
      *(undefined4 *)(param_1 + 0x804) = 1;
      iVar5 = local_40 * 0x60 + 0x1608 + param_1;
      *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(iVar5 + 0x18);
      *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(iVar5 + 0x3c);
      *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(iVar5 + 0x40);
      *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(iVar5 + 0x44);
      *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(iVar5 + 0x34);
      *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(iVar5 + 0x50);
      *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(iVar5 + 0x54);
      *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(iVar5 + 0x58);
      fVar1 = *(float *)(iVar5 + 0x50) - *(float *)(param_1 + 0x808);
      fVar3 = *(float *)(iVar5 + 0x54) - *(float *)(param_1 + 0x80c);
      fVar2 = *(float *)(iVar5 + 0x58) - *(float *)(param_1 + 0x810);
      *(int *)(param_1 + 0x850) = local_40;
      *(float *)(param_1 + 0x83c) =
           SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) / *(float *)(param_1 + 0x82c);
      *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(iVar5 + 0x48);
      *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(iVar5 + 0x4c);
    }
  }
  return *(undefined4 *)(param_1 + 0x804);
}

