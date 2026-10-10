
int __fastcall FUN_0067da2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar4 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(in_EAX + 4);
    if ((iVar4 == iVar3) ||
       (((((iVar4 != 0 || (iVar3 != 3)) && ((iVar4 != 3 || (iVar3 == 3)))) &&
         ((iVar4 != 2 || (iVar3 == 2)))) && ((iVar4 != 1 || (iVar3 == 1)))))) {
      iVar3 = 0;
      puVar5 = (uint *)(param_1 + 0xc);
      iVar4 = 5;
      do {
        uVar1 = *(uint *)((in_EAX - param_1) + (int)puVar5);
        uVar2 = *puVar5;
        if (uVar1 < uVar2) {
          if (uVar1 == 0) {
            iVar3 = iVar3 + 0x100;
          }
          else {
            iVar3 = iVar3 + (uVar2 - uVar1);
          }
        }
        else if (uVar2 < uVar1) {
          if (uVar2 == 0) {
            iVar3 = iVar3 + 0x1000000;
          }
          else {
            iVar3 = iVar3 + (uVar1 - uVar2) * 0x10000;
          }
        }
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return iVar3;
    }
  }
  return -1;
}

