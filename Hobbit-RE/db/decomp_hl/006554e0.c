
undefined4 thunk_FUN_006c2388(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  puStack_1c = param_1;
  puStack_24 = param_1;
  uStack_18 = 0x42;
  iStack_20 = 0x7fffffff;
  uVar1 = FUN_006c4b8e(&puStack_24,param_2,param_3);
  iStack_20 = iStack_20 + -1;
  if (iStack_20 < 0) {
    FUN_006c8426(0,&puStack_24);
  }
  else {
    *puStack_24 = 0;
  }
  return uVar1;
}

