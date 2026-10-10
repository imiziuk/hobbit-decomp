
undefined4 __thiscall
FUN_0065aac0(int param_1,undefined4 param_2,int *param_3,uint *param_4,int *param_5)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_8c;
  undefined1 local_80 [127];
  undefined1 local_1;
  
  local_8c = 0;
  iVar4 = *(int *)(param_1 + 0x224c) + -1;
  FUN_00647d70(local_80,param_2,0x80);
  local_1 = 0;
  FUN_00648080(local_80);
  if (-1 < iVar4) {
    while( true ) {
      while( true ) {
        iVar5 = local_8c + iVar4 >> 1;
        puVar1 = *(ushort **)(*(int *)(param_1 + 0x2250) + iVar5 * 4);
        iVar2 = *(int *)(puVar1 + 2);
        iVar6 = (uint)*puVar1 + *(int *)(iVar2 + 0x198);
        iVar3 = FUN_00647e40(local_80,iVar6);
        if (-1 < iVar3) break;
        if (iVar4 == local_8c) goto LAB_0065ab70;
        bVar7 = iVar4 == iVar5;
        iVar4 = iVar5;
        if (bVar7) {
          iVar4 = local_8c;
        }
      }
      if (iVar3 < 1) {
        *param_5 = iVar6;
        if (param_3 != (int *)0x0) {
          *param_3 = iVar2;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = (uint)puVar1[1];
        }
        return *(undefined4 *)(*(int *)(iVar2 + 0x1a8) + (uint)puVar1[1] * 4);
      }
      if (local_8c == iVar4) break;
      bVar7 = local_8c == iVar5;
      local_8c = iVar5;
      if (bVar7) {
        local_8c = iVar4;
      }
    }
  }
LAB_0065ab70:
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0xffffffff;
  }
  return 0;
}

