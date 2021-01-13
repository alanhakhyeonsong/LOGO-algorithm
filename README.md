### 📌Git 사용법
#### git config 설정
깃 설치 완료 후 사용 환경을 설정
```
git config --global user.email "you@example.com"
git config --global user.name "Your Name"
```
* 먼저 이 스터디 저장소를 Fork 한 뒤 Clone
* 문제 해결 소스코드는 ["문제 영어명_자신이름.확장자"](https://github.com/Hanturtle/LOGO-algorithm#%ED%8C%8C%EC%9D%BC-%EB%B0%8F-%ED%8F%B4%EB%8D%94-%EA%B5%AC%EC%A1%B0)

#### git clone
저장소 복제
![](https://images.velog.io/images/6mn12j/post/85d96505-3882-4dcc-914d-8b6e2f080321/%EC%A0%9C%EB%AA%A9-%EC%97%86%EC%9D%8C-1.png)
위의 빨간 부분 눌러서 git url 복사 후 
```
git clone (복사한주소)
//예시
git clone https://github.com/Hanturtle/LOGO-algorithm.git
```

### git fork
기존의 원격 레파지토리를 본인 레파지토리로 복제
빨간거 누르면 됨
![](https://images.velog.io/images/6mn12j/post/d1cd0bac-0907-4516-8925-8b8f053fd39d/image-(1).png)

### git remote 설정
로컬 에서 작업할 수 있도록 remote 저장소를 연결.
* 원격저장소 등록 하는 방법입니다.
```
git remote add (저장소 별칭) (저장소 url)
git remote add 6mn12j https://github.com/6mn12j/LOGO-algorithm.git
```
* git remote 확인 git remote 설정이 제대로 되었는지 확인하는 방법은 아래 명령어 입력
```
git remote -v
/*
origin  https://github.com/Hanturtle/LOGO-algorithm.git (fetch)
origin  https://github.com/Hanturtle/LOGO-algorithm.git (push)
*/
```

### git 커밋 후 push 까지
**git 저장소 생성**
```
git init 
```
**git branch 생성**
```
git branch 브랜치이름
//예시
git branch 6mn12j
```
**git branch 이동**
```
git chekcout 이동할브랜치이름
//예시
git checkout 6mn12j
```
**add**
```
git add  .
```
**commit**
```
git commit -m "커밋 메시지"
```
**push** : add된 로컬 파일들을 원격 저장소로 push
```
git push (저장소 별칭) (브랜치이름)
//예시
git push origin 6mn12j
```
**pull** :현재 원격저장소의 커밋을 로컬로 가져옴
```
git pull (저장소 별칭) (브랜치이름)
/*왠만하면 아래처럼 하면됨 본인 origin으로 등록된 repository의 master브랜치 에서 pull 땡김*/
git pull origin master
```
**merge**:문제풀이 올린 후 master에서 최종으로 merge

```
/*master 로 이동 후 해야함 git checkout master*/
git merge (저장소 별칭) (합병할브랜치이름)
//예시
git merge origin 6mn12j
```


### 📌파일 및 폴더 구조
* 자기가 발표하는 문제는 마크다운 파일 만들어서 문제 올려주기
* 마크다운 파일 예시 01: /programmers/스택,큐/다리를_지나는_트럭/README.md
* [마크다운 예시 파일](https://github.com/Hanturtle/LOGO-algorithm/blob/jiwon/programmers/%EC%8A%A4%ED%83%9D%2C%ED%81%90/%EB%8B%A4%EB%A6%AC%EB%A5%BC_%EC%A7%80%EB%82%98%EB%8A%94_%ED%8A%B8%EB%9F%AD/%EB%8B%A4%EB%A6%AC%EB%A5%BC%20%EC%A7%80%EB%82%98%EB%8A%94%20%ED%8A%B8%EB%9F%AD.md)

* `사이트/카테고리/문제이름/문제영어명_자신이름.확장자` 형식으로 업로드 해주세요
* 문제 예시 01: /programmers/해시/위장/camouflage_6mn12j.cpp
* 문제 예시 02: /programmers/스택,큐/주식가격/stock_jiwon.py

### 📌TIP
* 한 문제를 여러가지 방법으로 생각해보기
* 30분~60분 까지 고민해 본다.
* 어려우면 솔루션을 찾아본다.
* 알고리즘과 플러스로 git 까지 친해져 보자 !


