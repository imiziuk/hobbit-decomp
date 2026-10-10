
void FUN_006489b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_104 [4];
  undefined1 local_100 [256];
  
  FUN_00648a60(param_1,local_104,local_100,0,0);
  FUN_0064f190(param_2,&DAT_0074c610,local_104,local_100);
  iVar1 = FUN_00647cf0(param_2);
  if ((0 < iVar1) && (*(char *)(iVar1 + -1 + param_2) == '\\')) {
    *(undefined1 *)(iVar1 + -1 + param_2) = 0;
  }
  return;
}

