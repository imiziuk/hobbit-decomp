
void FUN_006693c2(void)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  
  uVar5 = *(uint *)(unaff_ESI + 8);
  if (uVar5 != 0) {
    if (unaff_EDI < uVar5) {
      uVar5 = unaff_EDI;
    }
    puVar3 = *(undefined2 **)(unaff_EBP + 8);
    puVar4 = *(undefined2 **)(unaff_ESI + 4);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  iVar2 = *(int *)(unaff_ESI + 4);
  uVar5 = *(uint *)(unaff_ESI + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840(iVar2 + -2);
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(int *)(unaff_ESI + 4) = iVar2 + 2;
  *(undefined1 *)(iVar2 + 1) = 0;
  *(uint *)(unaff_ESI + 0xc) = unaff_EDI;
  if (uVar5 <= unaff_EDI) {
    unaff_EDI = uVar5;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint *)(unaff_ESI + 8) = unaff_EDI;
  *(undefined2 *)(*(int *)(unaff_ESI + 4) + unaff_EDI * 2) = 0;
  return;
}

