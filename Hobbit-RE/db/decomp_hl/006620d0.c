
void FUN_006620d0(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_4;
  
  fVar1 = param_1;
  iVar2 = FUN_00661450(param_1);
  if (iVar2 < 10) {
    iVar3 = FUN_00661ea0(fVar1,&param_1,&local_4);
    fVar1 = local_4;
    if (iVar3 != 0) {
      if (local_4 < param_1) {
        local_4 = param_1;
        param_1 = fVar1;
      }
      if (param_2 < param_1 != (NAN(param_2) || NAN(param_1))) {
        param_2 = param_1;
      }
      if (local_4 < param_2) {
        param_2 = local_4;
      }
      (&DAT_007f016c)[iVar2 * 10] = param_2;
    }
  }
  return;
}

