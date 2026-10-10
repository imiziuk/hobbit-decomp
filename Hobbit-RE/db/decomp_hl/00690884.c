
void FUN_00690884(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = __ftol();
    *(undefined1 *)(iVar2 + param_1) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

