
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0064d8e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_40;
  float local_3c;
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
  
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_30 = param_1[4];
  local_2c = param_1[5];
  local_28 = param_1[6];
  local_24 = param_1[7];
  local_20 = param_1[8];
  local_1c = param_1[9];
  local_18 = param_1[10];
  local_14 = param_1[0xb];
  local_10 = param_1[0xc];
  local_c = param_1[0xd];
  local_8 = param_1[0xe];
  local_4 = param_1[0xf];
  FUN_004068c0(&local_5c);
  uVar5 = FUN_00401f00(DAT_006e92e8 / local_5c,DAT_006e92e8 / local_58,DAT_006e92e8 / local_54);
  FUN_00406940(uVar5);
  fVar2 = (local_40 + local_18 + local_2c + DAT_006e92e8) * _DAT_006e9550;
  fVar1 = fVar2 - (local_18 + local_2c) * _DAT_006e936c;
  fVar3 = fVar2 - (local_18 + local_40) * _DAT_006e936c;
  fVar4 = fVar2 - (local_2c + local_40) * _DAT_006e936c;
  if (fVar2 <= fVar1) {
    if (fVar1 <= fVar3) goto LAB_0064da4d;
    if (fVar4 < fVar1) {
      iVar6 = 1;
      goto LAB_0064da66;
    }
  }
  else if (fVar2 <= fVar3) {
LAB_0064da4d:
    iVar6 = 2;
    if (fVar4 < fVar3) goto LAB_0064da66;
  }
  else if (fVar4 < fVar2) {
    iVar6 = 0;
    goto LAB_0064da66;
  }
  iVar6 = 3;
LAB_0064da66:
                    /* WARNING: Could not recover jumptable at 0x0064da66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0064dbe8)[iVar6])();
  return;
}

