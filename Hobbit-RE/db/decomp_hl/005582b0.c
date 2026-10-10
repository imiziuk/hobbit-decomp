
void __thiscall FUN_005582b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int *local_214;
  undefined1 local_210 [4];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9eb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00553680();
  FUN_0064f350(local_210,4,1,param_2);
  FUN_0064f350(param_1,0xa04,1,param_2);
  FUN_0064f350(local_210,4,1,param_2);
  piVar7 = (int *)0x0;
  if (0 < *(int *)(param_1 + 0x9d4)) {
    pvVar4 = operator_new(*(int *)(param_1 + 0x9d4) * 4);
    *(void **)(param_1 + 0x9d0) = pvVar4;
    FUN_0064f350(pvVar4,4,*(undefined4 *)(param_1 + 0x9d4),param_2);
  }
  iVar8 = *(int *)(param_1 + 0x9dc);
  if (0 < iVar8) {
    local_214 = (int *)operator_new(iVar8 * 4 + 4);
    local_4 = 0;
    if (local_214 != (int *)0x0) {
      piVar7 = local_214 + 1;
      *local_214 = iVar8;
      FUN_006c043b(piVar7,4,iVar8,&LAB_00484230,FUN_00406ba0);
    }
    iVar8 = 0;
    local_4 = 0xffffffff;
    *(int **)(param_1 + 0x9d8) = piVar7;
    if (0 < *(int *)(param_1 + 0x9dc)) {
      do {
        FUN_0064f350(local_20c,0x100,1,param_2);
        FUN_00648a10(local_20c,local_10c);
        FUN_00649920(&local_214,&DAT_0071e9bc,param_3,local_10c);
        local_4 = 1;
        uVar5 = FUN_00649940();
        FUN_00549430(*(int *)(param_1 + 0x9d8) + iVar8 * 4,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x9dc));
    }
  }
  puVar9 = (uint *)(param_1 + 0x264);
  iVar8 = 0x10;
  do {
    *puVar9 = 0x7fffffff;
    if (*(short *)((int)puVar9 + 6) == 1) {
      iVar2 = *(int *)(param_1 + 0x9d8);
      uVar6 = *puVar9 & 0x7fffffff;
      *puVar9 = uVar6;
      puVar1 = (uint *)(iVar2 + (short)puVar9[1] * 4);
      *puVar9 = (*puVar1 ^ uVar6) & 0x7fffffff ^ uVar6;
      FUN_005492b0(puVar9,0);
      if ((int)*puVar1 < 0) {
        FUN_00549470(puVar9);
      }
      uVar5 = FUN_00549620(puVar1);
      FUN_00549670(puVar9,uVar5);
    }
    if ((short)puVar9[-3] == 0) {
      if (((NAN((float)puVar9[-7]) || NAN(DAT_006e92e4)) == ((float)puVar9[-7] == DAT_006e92e4)) ||
         ((NAN((float)puVar9[-6]) || NAN(DAT_006e92e4)) == ((float)puVar9[-6] == DAT_006e92e4))) {
        bVar3 = *(byte *)((int)puVar9 + -0x2a) | 1;
      }
      else {
        bVar3 = *(byte *)((int)puVar9 + -0x2a) | 2;
      }
      *(byte *)((int)puVar9 + -0x2a) = bVar3;
    }
    puVar9 = puVar9 + 0x1e;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(undefined4 *)(param_1 + 0x9cc) = 0xee1ef949;
  FUN_00558a10(0);
  FUN_005543c0(param_1);
  ExceptionList = local_c;
  return;
}

