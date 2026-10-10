
void FUN_006493a0(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar3 = 0x12 - param_2;
  if (0x13 < (int)uVar3) {
    uVar3 = 0x14;
  }
  cVar1 = s__________________________________0074c658[param_2];
  s__________________________________0074c658[param_2] = '\0';
  uVar3 = ((int)uVar3 < 1) - 1 & uVar3;
  uVar2 = param_1[10];
  if (param_1[3] != 0) {
    if ((uVar2 & 1) != 0) {
      fVar4 = (float10)FUN_0064cbb0(param_1[8],param_1[9],uVar2 >> 1 & 1,uVar2 >> 2 & 1,*param_1);
      fVar4 = (float10)FUN_0064cbb0(param_1[4],param_1[5],(double)fVar4);
      fVar5 = (float10)FUN_0064cbb0(param_1[8],param_1[9]);
      fVar4 = (float10)FUN_0064cbb0(param_1[4],param_1[5],(double)((float10)(float)fVar4 - fVar5));
      FUN_0064e870(7,s__s___s__06d____09_3f____07_3f____0074c864,
                   s__________________________________0074c658,
                   s__________________________________0074c67c + (0x20 - uVar3),param_1[6],
                   (double)fVar4);
    }
    s__________________________________0074c658[param_2] = cVar1;
    FUN_006494e0(param_1[3],param_2 + 1);
    s__________________________________0074c658[param_2] = cVar1;
    return;
  }
  if ((uVar2 & 1) != 0) {
    fVar4 = (float10)FUN_0064cbb0(param_1[4],param_1[5],uVar2 >> 1 & 1,uVar2 >> 2 & 1,*param_1);
    FUN_0064e870(7,s__s___s__06d____09_3f_____________0074c89c,
                 s__________________________________0074c658,(int)&PTR_DAT_0074c6c0 - uVar3,
                 param_1[6],(double)fVar4);
  }
  s__________________________________0074c658[param_2] = cVar1;
  return;
}

