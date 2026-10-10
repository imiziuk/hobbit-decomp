
void __thiscall FUN_00542030(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c [7];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9399;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_char_anim_player__CalcBasisVecto_00737d38);
  pfVar9 = (float *)(param_1 + 0x4c);
  local_4 = 0;
  if ((local_4c != pfVar9) && (pfVar9 != (float *)(param_1 + 0x8c))) {
    pfVar7 = local_4c + 2;
    iVar10 = (int)pfVar9 - (int)local_4c;
    do {
      pfVar7[-2] = *pfVar9;
      pfVar7[-1] = pfVar9[1];
      *pfVar7 = *(float *)(iVar10 + (int)pfVar7);
      pfVar7[1] = pfVar9[3];
      pfVar9 = pfVar9 + 4;
      pfVar7 = pfVar7 + 4;
    } while (pfVar9 != (float *)(param_1 + 0x8c));
  }
  fVar6 = local_28;
  local_58 = local_2c;
  fVar4 = local_4c[4];
  fVar5 = local_4c[1];
  local_4c[1] = local_4c[4];
  local_28 = local_4c[6];
  fVar3 = local_2c * *param_2;
  local_2c = local_4c[2];
  local_4c[4] = fVar5;
  fVar1 = param_2[2];
  local_50 = local_24;
  fVar2 = param_2[1];
  fVar4 = local_4c[6] * param_2[2] + local_4c[5] * param_2[1] + fVar4 * *param_2 + local_30;
  local_4c[3] = fVar5 * param_2[1] + local_4c[2] * param_2[2] + local_4c[0] * *param_2 + local_4c[3]
  ;
  local_54 = fVar6;
  FUN_00401f00(local_4c[3] * local_4c[0],fVar5 * local_4c[3],local_4c[2] * local_4c[3]);
  *param_3 = local_64;
  param_3[1] = local_60;
  param_3[2] = local_5c;
  FUN_00401f00(local_4c[1] * fVar4,local_4c[5] * fVar4,local_28 * fVar4);
  *param_4 = local_64;
  param_4[1] = local_60;
  param_4[2] = local_5c;
  uVar8 = FUN_00402160(&local_64,&local_58,fVar6 * fVar2 + local_24 * fVar1 + fVar3 + local_20);
  FUN_004357e0(uVar8);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

