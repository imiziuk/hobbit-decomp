
float10 FUN_006c57c3(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_006c5b0e(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_006c585b();
  }
  iVar1 = FUN_006c5dfa(param_1);
  if ((DAT_0075acb8 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_006c5d25(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_006c5dad(iVar1);
  FUN_006c5f9a();
  return (float10)param_4;
}

